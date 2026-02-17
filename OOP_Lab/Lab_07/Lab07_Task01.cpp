#include<iostream>
using namespace std;

class room {
    int room_no;
public:
    room(int r = 0) : room_no(r) {} 
    int show_room() {
        return room_no;
    }
};

class doctor {
    int id;
    string name;
    string specialization; 
    room r1;
public:
    doctor() : id(0), name(""), specialization(""), r1(0) {}
    doctor(int i, string n, string spec, int ro) : id(i), name(n), specialization(spec), r1(ro) {}

    string get_name() {
        return name;
    }
    string get_specialization() {
        return specialization;
    }
    friend void doctor_details(doctor doc);
};

void doctor_details(doctor doc) {
    cout << "Doctor Id: " << doc.id << endl;
    cout << "Doctor Name: " << doc.name << endl;
    cout << "Doctor Specialization: " << doc.specialization << endl;
    cout << "Doctor Room No: " << doc.r1.show_room() << endl;
}

class patient {
    int pat_id;
    string pat_name;
    string pat_disease;
    doctor* d1; 
public:
    patient() : pat_id(0), pat_name(""), pat_disease(""), d1(nullptr) {} 
    patient(int i, string n, string d, doctor* doct) : pat_id(i), pat_name(n), pat_disease(d), d1(doct) {}

    friend void show_patient(patient p1);
};

void show_patient(patient p1) {
    cout << "Patient Id: " << p1.pat_id << endl;
    cout << "Patient Name: " << p1.pat_name << endl;
    cout << "Patient Disease: " << p1.pat_disease << endl;
    cout << "Doctor Name: " << p1.d1->get_name() << endl;
    cout << "Doctor Specialization: " << p1.d1->get_specialization() << endl;
    cout << endl;
}

class hospital {
public:
    patient p1[10];
    doctor d1[10];
    int doc_count;
    int pat_count;

    hospital() : doc_count(0), pat_count(0) {}

    void printHospitalInfo() {
        cout << "Hospital Patients Information:" << endl;
        for (int i = 0; i < pat_count; i++) {
            show_patient(p1[i]);
        }
    }

    void show_doctor_details() {
        cout << "Hospital Doctors Information" << endl;
        for (int i = 0; i < doc_count; i++) {
            doctor_details(d1[i]);
        }
    }
};

int main() {
    hospital h;
    h.d1[0] = doctor(1, "Dr. Ghulam Nabi", "MBBS GYNO", 101);
    h.d1[1] = doctor(2, "Dr. Qasim Jan", "Neurologist", 102);
    h.doc_count = 2;
    h.p1[0] = patient(1, "Azan", "Heart Disease", &h.d1[0]);
    h.p1[1] = patient(2, "Aslam", "Brain Tumor", &h.d1[1]);
    h.pat_count = 2;
    h.show_doctor_details();
    cout << endl;
    h.printHospitalInfo();

    return 0;
}