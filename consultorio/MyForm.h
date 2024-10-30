#pragma once

namespace consultorio {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace ClinicaLib;

    public ref class MyForm : public System::Windows::Forms::Form {
    public:
        MyForm() {
            InitializeComponent();
            gestorClinica = gcnew GestorClinica();
        }

    protected:
        ~MyForm() {
            if (components) {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        GestorClinica^ gestorClinica;

        System::Windows::Forms::TextBox^ txtNombre;
        System::Windows::Forms::TextBox^ txtEdad;
        System::Windows::Forms::TextBox^ txtGenero;
        System::Windows::Forms::TextBox^ txtContacto;
        System::Windows::Forms::TextBox^ txtTelefono;
        System::Windows::Forms::TextBox^ txtCorreo;
        System::Windows::Forms::TextBox^ txtHistorialMedico;
        System::Windows::Forms::TextBox^ txtMontoPago;

        System::Windows::Forms::Label^ lblNombre;
        System::Windows::Forms::Label^ lblEdad;
        System::Windows::Forms::Label^ lblGenero;
        System::Windows::Forms::Label^ lblContacto;
        System::Windows::Forms::Label^ lblTelefono;
        System::Windows::Forms::Label^ lblCorreo;
        System::Windows::Forms::Label^ lblHistorialMedico;
        System::Windows::Forms::Label^ lblMontoPago;
        System::Windows::Forms::Label^ lblEstadoPago;

        System::Windows::Forms::Button^ btnAgregar;
        System::Windows::Forms::Button^ btnBuscar;
        System::Windows::Forms::Button^ btnActualizar;
        System::Windows::Forms::Button^ btnEliminar;
        System::Windows::Forms::Button^ btnAtender;

        System::Windows::Forms::CheckBox^ chkPago;

    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;

        System::Windows::Forms::DataGridView^ dataGridView1;

        void InitializeComponent(void) {
            this->txtNombre = (gcnew System::Windows::Forms::TextBox());
            this->txtEdad = (gcnew System::Windows::Forms::TextBox());
            this->txtGenero = (gcnew System::Windows::Forms::TextBox());
            this->txtContacto = (gcnew System::Windows::Forms::TextBox());
            this->txtHistorialMedico = (gcnew System::Windows::Forms::TextBox());
            this->txtMontoPago = (gcnew System::Windows::Forms::TextBox());
            this->lblNombre = (gcnew System::Windows::Forms::Label());
            this->lblEdad = (gcnew System::Windows::Forms::Label());
            this->lblGenero = (gcnew System::Windows::Forms::Label());
            this->lblContacto = (gcnew System::Windows::Forms::Label());
            this->lblHistorialMedico = (gcnew System::Windows::Forms::Label());
            this->lblMontoPago = (gcnew System::Windows::Forms::Label());
            this->lblEstadoPago = (gcnew System::Windows::Forms::Label());
            this->btnAgregar = (gcnew System::Windows::Forms::Button());
            this->btnBuscar = (gcnew System::Windows::Forms::Button());
            this->btnActualizar = (gcnew System::Windows::Forms::Button());
            this->btnEliminar = (gcnew System::Windows::Forms::Button());
            this->btnAtender = (gcnew System::Windows::Forms::Button());
            this->chkPago = (gcnew System::Windows::Forms::CheckBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // txtNombre
            // 
            this->txtNombre->Location = System::Drawing::Point(126, 20);
            this->txtNombre->Name = L"txtNombre";
            this->txtNombre->Size = System::Drawing::Size(169, 22);
            this->txtNombre->TabIndex = 1;
            // 
            // txtEdad
            // 
            this->txtEdad->Location = System::Drawing::Point(126, 61);
            this->txtEdad->Name = L"txtEdad";
            this->txtEdad->Size = System::Drawing::Size(25, 22);
            this->txtEdad->TabIndex = 3;
            // 
            // txtGenero
            // 
            this->txtGenero->Location = System::Drawing::Point(126, 101);
            this->txtGenero->Name = L"txtGenero";
            this->txtGenero->Size = System::Drawing::Size(100, 22);
            this->txtGenero->TabIndex = 5;
            // 
            // txtContacto
            // 
            this->txtContacto->Location = System::Drawing::Point(126, 141);
            this->txtContacto->Name = L"txtContacto";
            this->txtContacto->Size = System::Drawing::Size(100, 22);
            this->txtContacto->TabIndex = 7;
            // 
            // txtHistorialMedico
            // 
            this->txtHistorialMedico->Location = System::Drawing::Point(120, 180);
            this->txtHistorialMedico->Multiline = true;
            this->txtHistorialMedico->Name = L"txtHistorialMedico";
            this->txtHistorialMedico->Size = System::Drawing::Size(669, 100);
            this->txtHistorialMedico->TabIndex = 9;
            // 
            // txtMontoPago
            // 
            this->txtMontoPago->Location = System::Drawing::Point(484, 17);
            this->txtMontoPago->Name = L"txtMontoPago";
            this->txtMontoPago->Size = System::Drawing::Size(77, 22);
            this->txtMontoPago->TabIndex = 18;
            // 
            // lblNombre
            // 
            this->lblNombre->Location = System::Drawing::Point(20, 20);
            this->lblNombre->Name = L"lblNombre";
            this->lblNombre->Size = System::Drawing::Size(100, 23);
            this->lblNombre->TabIndex = 0;
            this->lblNombre->Text = L"Nombre:";
            // 
            // lblEdad
            // 
            this->lblEdad->Location = System::Drawing::Point(20, 60);
            this->lblEdad->Name = L"lblEdad";
            this->lblEdad->Size = System::Drawing::Size(100, 23);
            this->lblEdad->TabIndex = 2;
            this->lblEdad->Text = L"Edad:";
            // 
            // lblGenero
            // 
            this->lblGenero->Location = System::Drawing::Point(20, 100);
            this->lblGenero->Name = L"lblGenero";
            this->lblGenero->Size = System::Drawing::Size(100, 23);
            this->lblGenero->TabIndex = 4;
            this->lblGenero->Text = L"Género:";
            // 
            // lblContacto
            // 
            this->lblContacto->Location = System::Drawing::Point(20, 140);
            this->lblContacto->Name = L"lblContacto";
            this->lblContacto->Size = System::Drawing::Size(100, 23);
            this->lblContacto->TabIndex = 6;
            this->lblContacto->Text = L"Contacto:";
            // 
            // lblHistorialMedico
            // 
            this->lblHistorialMedico->Location = System::Drawing::Point(20, 180);
            this->lblHistorialMedico->Name = L"lblHistorialMedico";
            this->lblHistorialMedico->Size = System::Drawing::Size(100, 23);
            this->lblHistorialMedico->TabIndex = 8;
            this->lblHistorialMedico->Text = L"Historial Médico:";
            // 
            // lblMontoPago
            // 
            this->lblMontoPago->Location = System::Drawing::Point(365, 19);
            this->lblMontoPago->Name = L"lblMontoPago";
            this->lblMontoPago->Size = System::Drawing::Size(109, 23);
            this->lblMontoPago->TabIndex = 16;
            this->lblMontoPago->Text = L"Monto de Pago:";
            // 
            // lblEstadoPago
            // 
            this->lblEstadoPago->Location = System::Drawing::Point(365, 64);
            this->lblEstadoPago->Name = L"lblEstadoPago";
            this->lblEstadoPago->Size = System::Drawing::Size(113, 19);
            this->lblEstadoPago->TabIndex = 17;
            this->lblEstadoPago->Text = L"Estado de Pago:";
            // 
            // btnAgregar
            // 
            this->btnAgregar->Location = System::Drawing::Point(20, 300);
            this->btnAgregar->Name = L"btnAgregar";
            this->btnAgregar->Size = System::Drawing::Size(131, 32);
            this->btnAgregar->TabIndex = 10;
            this->btnAgregar->Text = L"Agregar Paciente";
            this->btnAgregar->Click += gcnew System::EventHandler(this, &MyForm::btnAgregar_Click);
            // 
            // btnBuscar
            // 
            this->btnBuscar->Location = System::Drawing::Point(176, 300);
            this->btnBuscar->Name = L"btnBuscar";
            this->btnBuscar->Size = System::Drawing::Size(135, 32);
            this->btnBuscar->TabIndex = 11;
            this->btnBuscar->Text = L"Buscar Paciente";
            this->btnBuscar->Click += gcnew System::EventHandler(this, &MyForm::btnBuscar_Click);
            // 
            // btnActualizar
            // 
            this->btnActualizar->Location = System::Drawing::Point(330, 300);
            this->btnActualizar->Name = L"btnActualizar";
            this->btnActualizar->Size = System::Drawing::Size(135, 32);
            this->btnActualizar->TabIndex = 12;
            this->btnActualizar->Text = L"Actualizar Paciente";
            this->btnActualizar->Click += gcnew System::EventHandler(this, &MyForm::btnActualizar_Click);
            // 
            // btnEliminar
            // 
            this->btnEliminar->Location = System::Drawing::Point(654, 300);
            this->btnEliminar->Name = L"btnEliminar";
            this->btnEliminar->Size = System::Drawing::Size(145, 32);
            this->btnEliminar->TabIndex = 13;
            this->btnEliminar->Text = L"Eliminar Paciente";
            this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
            // 
            // btnAtender
            // 
            this->btnAtender->Location = System::Drawing::Point(484, 300);
            this->btnAtender->Name = L"btnAtender";
            this->btnAtender->Size = System::Drawing::Size(145, 32);
            this->btnAtender->TabIndex = 15;
            this->btnAtender->Text = L"Atender Paciente";
            this->btnAtender->Click += gcnew System::EventHandler(this, &MyForm::btnAtender_Click);
            // 
            // chkPago
            // 
            this->chkPago->Location = System::Drawing::Point(508, 64);
            this->chkPago->Name = L"chkPago";
            this->chkPago->Size = System::Drawing::Size(24, 22);
            this->chkPago->TabIndex = 16;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeight = 29;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
                this->dataGridViewTextBoxColumn1,
                    this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
                    this->dataGridViewTextBoxColumn6
            });
            this->dataGridView1->Location = System::Drawing::Point(20, 350);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->Size = System::Drawing::Size(799, 200);
            this->dataGridView1->TabIndex = 14;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this->dataGridViewTextBoxColumn1->HeaderText = L"Nombre";
            this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
            this->dataGridViewTextBoxColumn1->ReadOnly = true;
            this->dataGridViewTextBoxColumn1->Width = 125;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this->dataGridViewTextBoxColumn2->HeaderText = L"Edad";
            this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
            this->dataGridViewTextBoxColumn2->ReadOnly = true;
            this->dataGridViewTextBoxColumn2->Width = 125;
            // 
            // dataGridViewTextBoxColumn3
            // 
            this->dataGridViewTextBoxColumn3->HeaderText = L"Género";
            this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
            this->dataGridViewTextBoxColumn3->ReadOnly = true;
            this->dataGridViewTextBoxColumn3->Width = 125;
            // 
            // dataGridViewTextBoxColumn4
            // 
            this->dataGridViewTextBoxColumn4->HeaderText = L"Contacto";
            this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
            this->dataGridViewTextBoxColumn4->ReadOnly = true;
            this->dataGridViewTextBoxColumn4->Width = 125;
            // 
            // dataGridViewTextBoxColumn5
            // 
            this->dataGridViewTextBoxColumn5->HeaderText = L"Estado de Pago";
            this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
            this->dataGridViewTextBoxColumn5->ReadOnly = true;
            this->dataGridViewTextBoxColumn5->Width = 125;
            // 
            // dataGridViewTextBoxColumn6
            // 
            this->dataGridViewTextBoxColumn6->HeaderText = L"Total Acumulado";
            this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
            this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
            this->dataGridViewTextBoxColumn6->ReadOnly = true;
            this->dataGridViewTextBoxColumn6->Width = 125;
            // 
            // MyForm
            // 
            this->ClientSize = System::Drawing::Size(831, 559);
            this->Controls->Add(this->lblNombre);
            this->Controls->Add(this->txtNombre);
            this->Controls->Add(this->lblEdad);
            this->Controls->Add(this->txtEdad);
            this->Controls->Add(this->lblGenero);
            this->Controls->Add(this->txtGenero);
            this->Controls->Add(this->lblContacto);
            this->Controls->Add(this->txtContacto);
            this->Controls->Add(this->lblHistorialMedico);
            this->Controls->Add(this->txtHistorialMedico);
            this->Controls->Add(this->btnAgregar);
            this->Controls->Add(this->btnBuscar);
            this->Controls->Add(this->btnActualizar);
            this->Controls->Add(this->btnEliminar);
            this->Controls->Add(this->btnAtender);
            this->Controls->Add(this->chkPago);
            this->Controls->Add(this->lblMontoPago);
            this->Controls->Add(this->txtMontoPago);
            this->Controls->Add(this->lblEstadoPago);
            this->Controls->Add(this->dataGridView1);
            this->Name = L"MyForm";
            this->Text = L"Sistema de Gestión de Consultorio";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }


        void ActualizarDataGridView() {
            dataGridView1->Rows->Clear();
            for each (Paciente ^ paciente in gestorClinica->ObtenerPacientesRegistrados()) {
                dataGridView1->Rows->Add(paciente->Nombre, paciente->Edad.ToString(), paciente->Genero,
                    paciente->Contacto, paciente->EstadoPago, paciente->TotalAcumulado.ToString());
            }
        }

    private: System::Void btnAgregar_Click(Object^ sender, EventArgs^ e) {
        Paciente^ nuevoPaciente = gcnew Paciente();
        nuevoPaciente->Nombre = txtNombre->Text;
        nuevoPaciente->Edad = Convert::ToInt32(txtEdad->Text);
        nuevoPaciente->Genero = txtGenero->Text;
        nuevoPaciente->Contacto = txtContacto->Text;
        nuevoPaciente->TotalAcumulado = Convert::ToDouble(txtMontoPago->Text);
        nuevoPaciente->EstadoPago = chkPago->Checked ? "Pagado" : "Pendiente";
        gestorClinica->RegistrarPaciente(nuevoPaciente);
        gestorClinica->AgregarPacienteACola(nuevoPaciente);
        ActualizarDataGridView();
    }

    private: System::Void btnBuscar_Click(Object^ sender, EventArgs^ e) {
        System::String^ nombreBuscado = txtNombre->Text;
        Paciente^ paciente = gestorClinica->BuscarPaciente(nombreBuscado);
        if (paciente != nullptr) {
            txtEdad->Text = paciente->Edad.ToString();
            txtGenero->Text = paciente->Genero;
            txtContacto->Text = paciente->Contacto;
            txtHistorialMedico->Text = paciente->ObtenerHistorialMedico();
        }
        else {
            MessageBox::Show("Paciente no encontrado.");
        }
    }

    private: System::Void btnActualizar_Click(Object^ sender, EventArgs^ e) {
        System::String^ nombreBuscado = txtNombre->Text;
        Paciente^ paciente = gestorClinica->BuscarPaciente(nombreBuscado);
        if (paciente != nullptr) {
            paciente->Edad = Convert::ToInt32(txtEdad->Text);
            paciente->Genero = txtGenero->Text;
            paciente->Contacto = txtContacto->Text;
            paciente->TotalAcumulado = Convert::ToDouble(txtMontoPago->Text);
            paciente->EstadoPago = chkPago->Checked ? "Pagado" : "Pendiente";
            ActualizarDataGridView();
        }
        else {
            MessageBox::Show("Paciente no encontrado.");
        }
    }

    private: System::Void btnEliminar_Click(Object^ sender, EventArgs^ e) {
        System::String^ nombreBuscado = txtNombre->Text;
        Paciente^ paciente = gestorClinica->BuscarPaciente(nombreBuscado);
        if (paciente != nullptr) {
            gestorClinica->ObtenerPacientesRegistrados()->Remove(paciente);
            ActualizarDataGridView();
        }
        else {
            MessageBox::Show("Paciente no encontrado.");
        }
    }
    private: System::Void btnAtender_Click(System::Object^ sender, System::EventArgs^ e) {
         Paciente^ pacienteAtendido = gestorClinica->AtenderSiguientePaciente();
               if (pacienteAtendido) {
                   txtNombre->Text = pacienteAtendido->Nombre;
                   txtEdad->Text = pacienteAtendido->Edad.ToString();
                   txtGenero->Text = pacienteAtendido->Genero;
                   txtContacto->Text = pacienteAtendido->Contacto;
                   MessageBox::Show("Atendiendo al paciente: " + pacienteAtendido->Nombre);

                   Paciente^ siguientePaciente = gestorClinica->VerSiguientePaciente();
                   if (siguientePaciente) {
                       MessageBox::Show("El siguiente paciente en espera es: " + siguientePaciente->Nombre);
                   }
                   else {
                       MessageBox::Show("No hay más pacientes en espera.");
                   }
               }
               else {
                   MessageBox::Show("No hay pacientes en espera");
               }
    }

    };
}
