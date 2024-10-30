#pragma once

namespace ClinicaLib {
    public ref class Consulta {
    public:
        System::String^ Fecha;
        System::String^ Motivo;
        System::String^ Diagnostico;
        System::String^ Tratamiento;
        double Costo;
    };

    public ref class Paciente {
    public:
        System::String^ Nombre;
        int Edad;
        System::String^ Genero;
        System::String^ Contacto;
        System::Collections::Generic::List<Consulta^>^ HistorialConsultas;
        double TotalAcumulado;
        System::String^ EstadoPago;

        Paciente() {
            HistorialConsultas = gcnew System::Collections::Generic::List<Consulta^>();
            TotalAcumulado = 0.0;
            EstadoPago = "Pendiente";
        }

        void AgregarConsulta(Consulta^ consulta) {
            HistorialConsultas->Add(consulta);
            TotalAcumulado += consulta->Costo;
        }

        System::String^ ObtenerHistorialMedico() {
            System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
            for each (Consulta ^ consulta in HistorialConsultas) {
                sb->AppendFormat("Fecha: {0}\nDiagnóstico: {1}\nTratamiento: {2}\n\n",
                    consulta->Fecha, consulta->Diagnostico, consulta->Tratamiento);
            }
            return sb->ToString();
        }
    };

    public ref class GestorClinica {
    private:
        System::Collections::Generic::Queue<Paciente^>^ colaEspera;
        System::Collections::Generic::List<Paciente^>^ pacientesRegistrados;

    public:
        GestorClinica() {
            colaEspera = gcnew System::Collections::Generic::Queue<Paciente^>();
            pacientesRegistrados = gcnew System::Collections::Generic::List<Paciente^>();
        }

        void AgregarPacienteACola(Paciente^ paciente) {
            colaEspera->Enqueue(paciente);
        }

        Paciente^ AtenderSiguientePaciente() {
            if (colaEspera->Count > 0) {
                Paciente^ paciente = colaEspera->Dequeue();
                if (!pacientesRegistrados->Contains(paciente)) {
                    pacientesRegistrados->Add(paciente);
                }
                return paciente;
            }
            return nullptr;
        }

        Paciente^ VerSiguientePaciente() {
            return colaEspera->Count > 0 ? colaEspera->Peek() : nullptr;
        }

        void RegistrarPaciente(Paciente^ paciente) {
            if (!pacientesRegistrados->Contains(paciente)) {
                pacientesRegistrados->Add(paciente);
            }
        }

        System::Collections::Generic::List<Paciente^>^ ObtenerPacientesRegistrados() {
            return pacientesRegistrados;
        }

        Paciente^ BuscarPaciente(System::String^ nombre) {
            for each (Paciente ^ p in pacientesRegistrados) {
                if (p->Nombre == nombre) {
                    return p;
                }
            }
            return nullptr;
        }
    };
}
