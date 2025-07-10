#include<iostream>
#include<string>
using namespace std;

class appointment {
public:
    string doctor_name;
    string date;
    float time;

    appointment()
    {
        cout << "ENTER DOCTOR'S NAME: ";
        getline(cin >>ws, doctor_name);
        cout << "ENTER DATE(DD/MM) OF APPOINTMENT YOU WANT: ";
        getline(cin >>ws, date);
        cout << "ENTER THE TIME(24hrs) OF APPOINTMENT: ";
        cin >> time;
        cin.ignore();
    }
};

class patient : public appointment
{
    public:

    string patient_name;
    string patient_id;
    int patient_age;
    char patient_gender;

    patient()
    {
        cout<<"ENTER PATIENT'S NAME: ";
        getline(cin>>ws,patient_name);
        cout<<"ENTER PATIENT'S ID:";
        getline(cin>>ws,patient_id);
        cout<<"ENTER PATIENT'S AGE: ";
        cin>> patient_age;
        cout<<"ENTER PATIENT'S GENDER ";
        cout<<endl;
        cout<<"\t\t\t *ENTER M/m FOR MALE ";
        cout<<endl;
        cout<<"\t\t\t *ENTER F/f FOR FEMALE ";
        cout<<endl;
        cout<<"\t\t\t *ENTER T/t FOR OTHERS ";
        cout<<endl;
        cin>> patient_gender;
    }
    void displaypat()
    {
        cout<<"\t\t\t\t PATIENT REGISTERED\n\n";
        cout<<"\tPATIENT'S NAME\tPATIENT'S ID\tPATIENT'S AGE\tPATIENT GENDER\tDOCTOR'S NAME\tDATE OF APPOINTMENT\tTIME OF APPOINTMENT\n\n";
        cout<<"\t"<<patient_name<<"\t\t"<<patient_id<<"\t\t"<<patient_age<<"\t\t"<<patient_gender<<"\t\t"<<doctor_name<<"\t\t"<<date<<"\t\t"<<time<<endl;

    }
};
class doctor{
    private:
    string dr_name;
    string doctor_id;
    int dr_specialization;

    public:

    doctor()
    {
        cout<<"ENTER DOCTOR'S NAME: ";
        getline(cin>>ws,dr_name);
        cout<<"ENTER DOCTOR'S ID:";
        getline(cin>>ws,doctor_id);
        specialist();
        cin>>dr_specialization;
    }
    void specialist();
    void displaydoc(){
        cout<<"\t\t\t\t DOCTOR REGISTERED\n";
        cout<<"\t\t DOCTOR'S NAME\t\t DOCTOR'S ID\t\tDOCTOR SPECIALIZATION\n\n";
        cout<<"\t\t "<<dr_name<<"\t\t\t"<<doctor_id<<"\t\t\t";
        switch(dr_specialization)
        {
            case 1: cout<<"CARDIOLOGISTS\n\n";
            break;

            case 2:cout<<"AUDIOLOGISTS\n\n";
            break;

            case 3: cout<<"DENTIST\n\n";
            break;

            case 4: cout<<"ENT SPECIALIST\n\n";
            break;

            case 5: cout<<"GYNECOLOGIST\n\n";
            break;

            case 6: cout<<"ORTHOPEDIC SURGEON\n\n";
            break;

            case 7: cout<<"PAEDIATRICIAN\n\n";
            break;

            case 8: cout<<"PSYCHIATRISTS\n\n";
            break;

            case 9: cout<<"VETERINARIAN\n\n";
            break;

            case 10: cout<<"RADIOLOGIST\n\n";
            break;

            case 11: cout<<"PULMONOLOGIST\n\n";
            break;

            case 12: cout<<"ENDOCRINOLOGIST\n\n";
            break;

            case 13: cout<<"ONCOLOGIST\n\n";
            break;

            case 14: cout<<"NEUROLOGIST\n\n";
            break;

            case 15: cout<<"CARDIOTHORACIC SURGEON\n\n";
            break;
        }
    }
};
void doctor:: specialist()
{
    cout<<"SELECT SPECIALIZATION TYPE: \n";
    cout<<"1. Cardiologists \n";
    cout<<"2. Audiologists \n";
    cout<<"3. Denstist \n";
    cout<<"4. ENT Specialist \n";
    cout<<"5. Gynecologist \n";
    cout<<"6. Orthopedic surgeon \n";
    cout<<"7. Paediatrician \n";
    cout<<"8. Psychiatrists \n";
    cout<<"9. Veterinarian \n";
    cout<<"10. Radiologist \n";
    cout<<"11. Pulmonologist \n";
    cout<<"12. Endocrinologist \n";
    cout<<"13. Oncologist \n";
    cout<<"14. Neurologist \n";
    cout<<"15. Cardiothoracic Surgeon \n";

}
class billing
{
    public:

    string name;
    string patientid;
    float cost_of_services;
    float cost_of_medication;
    float cost_of_equipment;
    float other_charges;
    float insurance_coverage;
    float discounts;

    billing()
    {
        cout<<"ENTER PATIENT'S NAME: ";
        getline(cin>>ws,name);
        cout<<"ENTER PATIENT'S ID:";
        getline(cin>>ws,patientid);
        cost_of_services = 0;
        cost_of_medication=0;
        cost_of_equipment = 0;
        other_charges = 0;
        insurance_coverage = 0;
        discounts = 0;
    }
    float costofser(float j)
    {
        cost_of_services+= j;
        return cost_of_services;

    }
    float costofmedic();
    float costofeq();
    float others();
    float insurance();
};

void display()
{
    cout<<"\t\t\t\t WELCOME TO OUR HOSPITAL ";
    cout<<endl;
    cout<<" 1. PATIENT REGISTRATION ";
    cout<<endl;
    cout<<" 2. DOCTOR REGISTRATION ";
    cout<<endl;
    cout<<" 3. BILLING SYSTEM ";
    cout<<endl;
    cout<<" 0. FOR EXIT MENU\n";
    cout<<"\t\t\t\t\t GMD's HOSPITALS \n\n";
    cout<<endl;
}
void procedures()
{
    cout<<"\t\t\tSELECT TYPE OF SURGERIES YOU WANT:"<<endl;
    cout<<"1. MINOR PROCEDURES"<<endl;
    cout<<"2. COMMON SURGERIES "<<endl;
    cout<<"3. MAJOR SURGERIES"<<endl;
    cout<<"4. ORTHOPEDIC PROCEDURES"<<endl;
    cout<<"5. NEUROSURGICAL PROCEDURES"<<endl;
    cout<<"6. COSMETIC SURGERIES"<<endl;
    cout<<"7. GASTROINTESTINAL PROCEDURES"<<endl;
    cout<<"8. UROLOGICAL PROCEDURES"<<endl;
    cout<<"9. OPTHALMIC PROCEDURES"<<endl;
    cout<<"10. GYNECOLOGICAL PROCEDURES"<<endl;
    cout<<"\n\n";

}
void appoin()
{
    cout<<"1. DOCTOR CONSULTATION"<<endl;
    cout<<"2. SURGERIES "<<endl;
    cout<<"3. DIAGNOSTIC TESTS"<<endl;
    cout<<"4. TREATMENT FOR INJURIES OR ILLNESS"<<endl;
    cout<<"SELECT ANY OTHER NUMBER TO EXIT"<<endl;
}
void test()
{
    cout<<"1. ECG"<<endl;
    cout<<"2. Blood Test"<<endl;
    cout<<"3. Sugar Test"<<endl;
    cout<<"4. AIDS"<<endl;
    cout<<"SELECT ANY OTHER NUMBER TO EXIT"<<endl;
}
class minor
{
    public:
    double x[5];
    float y[5];
    float cost;
    minor()
    {
        cout<<"\t\t\tSELECT TYPE OF MINOR SURGERIES:"<<endl;
        cout<<"0. MOLE REMOVAL "<<endl;
        cout<<"1. SKIN BIOPSY"<<endl;
        cout<<"2. INCISION AND DRAINAGE OF ABSCESS"<<endl;
        cout<<"3. CIRCUM CISION"<<endl;
        cout<<"4. DENTAL PROCEDURES(TOOTH EXTRACTION)\n\n"<<endl;
    }
   void minorequip()
    {

        y[0]= 350;
        y[1]= 300;
        y[2]=450;
        y[3]=250;
        y[4]= 100;


    }
    void minorcost()
    {
        x[0]= 270;
        x[1] = 166;
        x[2] = 416;
        x[3] = 833;
        x[4] = 250;

    }
};
class common
{
public:
    double x[5];
    float cost;
    float y[5];
    common()
    {
        cout<<"\t\t\tSELECT TYPE OF COMMON SURGERIES:"<<endl;
        cout<<"0. APPENDECTOMY(APPENDIX REMOVAL) "<<endl;
        cout<<"1. CHOLECYSTECTOMY(GALL BLADDER REMOVAL)"<<endl;
        cout<<"2. HERNIA REPAIR(INGUINAL,UMBILICAL or HIATAL HERNIA)"<<endl;
        cout<<"3. TONSILLECTOMY(TONSIL REMOVAL)"<<endl;
        cout<<"4. JOINT ARTHOSCOPY(KNEE,SHOULDER OR HIP)\n\n"<<endl;
    }
    void commonequip()
    {

        y[0]= 600;
        y[1]= 800;
        y[2]= 500;
        y[3]=300;
        y[4]= 500;


    }
   void commoncost()
    {
        x[0]= 1250;
        x[1] = 833;
        x[2] = 500;
        x[3] = 625;
        x[4] = 125;

    }
};
class major
{
    public:
    double x[5];
    float cost;
    float y[5];
    major()
    {
        cout<<"\t\t\tSELECT TYPE OF MAJOR SURGERIES:"<<endl;
        cout<<"0. CORONARY ARTERY BYPASS GRAFT(CABG) SURGERY "<<endl;
        cout<<"1. OPEN-HEART SURGERY(VALVE REPLACEMENT,REPAIR OF CIGENITAL HEART DEFECT)"<<endl;
        cout<<"2. ORGAN TRANSPLANT(KIDNEY,LIVER,HEART,LUNG)"<<endl;
        cout<<"3. SPINAL FUSION SURGERY"<<endl;
        cout<<"4. CRANIOTOMY(BRAIN SURGERY)\n\n"<<endl;
    }
   void majorequip()
    {

        y[0]=400;
        y[1]= 200;
        y[2]= 500;
        y[3]= 300;
        y[4]= 400;


    }
   void majorcost()
    {
        x[0]= 2917;
        x[1] = 1125;
        x[2] = 3334;
        x[3] = 8337;
        x[4] = 8368;

    }
};
class orthopedic
{
    public:
    double x[5];
    float cost;
    float y[5];
    orthopedic()
    {
        cout<<"\t\t\tSELECT TYPE OF ORTHOPEDIC PROCEDURES:"<<endl;
        cout<<"0. TOTAL KNEE REPLACEMENT(TKR) "<<endl;
        cout<<"1. TOTAL HIP REPLACEMENT(THR)"<<endl;
        cout<<"2. ACL RECONSTRUCTION(ARTERIOR CRUCIATE LIGAMNET)"<<endl;
        cout<<"3. ROTATE CUFF REPAIR"<<endl;
        cout<<"4. CARPAL TUNNEL RELEASE\n\n"<<endl;
    }
   void orthoequip()
    {

        y[0]= 200;
        y[1]= 700;
        y[2]= 1500;
        y[3]=1000;
        y[4]= 2500;


    }
   void orthocost()
    {
        x[0]= 375;
        x[1] = 375;
        x[2] = 291;
        x[3] = 275;
        x[4] = 215;

    }
};
class neurosurgical
{
    public:
    double x[5];
    float cost;
    float y[5];
    neurosurgical()
    {
        cout<<"\t\t\tSELECT TYPE OF NEUROSURGICAL PROCEDURES:"<<endl;
        cout<<"0. BRAIN TUMOR RESECTION "<<endl;
        cout<<"1. SPINAL DECOMPRESSION SURGERY"<<endl;
        cout<<"2. DEEP BRAIN STIMULATION (DBS) FOR PARKINSON's DISEASE"<<endl;
        cout<<"3. LUMBAR LAMINECTOMY(FOR SPINAL STENOSIS)"<<endl;
        cout<<"4. NEUROSTIMULATOR IMPLANTATION FOR CHRONIC PAIN MANAGEMENT\n\n"<<endl;
    }
   void neuroequip()
    {

        y[0]= 300;
        y[1]= 150;
        y[2]= 500;
        y[3]=150;
        y[4]= 750;


    }
   void neurocost()
    {
        x[0]= 1042;
        x[1] = 2501;
        x[2] = 9587;
        x[3] = 8337;
        x[4] = 291;

    }
};
class cosmetic
{
    public:
    double x[5];
    float cost;
    float y[5];
    cosmetic()
    {
        cout<<"\t\t\tSELECT TYPE OF COSMETIC SURGERIES:"<<endl;
        cout<<"0. BREAST AUGMENTATION "<<endl;
        cout<<"1. RHINOPLASTY(NOSE JOB)"<<endl;
        cout<<"2. FACELIFT"<<endl;
        cout<<"3. LIPOSUCTION"<<endl;
        cout<<"4. ABDOMINOPLASTY(TUMMY TUCK)\n\n"<<endl;
    }
   void cosmeticequip()
    {

        y[0]= 100;
        y[1]= 500;
        y[2]= 100;
        y[3]= 400;
        y[4]= 800;


    }
    void cosmeticcost()
    {
        x[0]= 625;
        x[1] = 833;
        x[2] = 875;
        x[3] = 416;
        x[4] = 750;

    }
};
class gastrointestinal
{
    public:
    double x[5];
    float cost;
    float y[5];

    gastrointestinal()
    {
        cout<<"\t\t\tSELECT TYPE OF GASTROINTESTINAL PROCEDURES:"<<endl;
        cout<<"0. COLONOSCOPY "<<endl;
        cout<<"1. ENDOSCOPIC RETROGRADE CHOLANGIOPANCREATOGRAPHY(ERCP)"<<endl;
        cout<<"2. HEMORRHOIDECTONCY"<<endl;
        cout<<"3. GASTRIC BYPASS SURGERY"<<endl;
        cout<<"4. ESOPHAGECTONCY\n\n"<<endl;
    }
   void gastroequip()
    {

        y[0]= 500;
        y[1]= 150;
        y[2]= 541;
        y[3]=250;
        y[4]= 200;


    }
   void gastrocost()
    {
        x[0]= 120;
        x[1] = 240;
        x[2] = 250;
        x[3] = 650;
        x[4] = 350;

    }
};

class urological
{
    public:
    double x[5];
    float cost;
    float y[5];
    urological()
    {
        cout<<"\t\t\tSELECT TYPE OF UROLOGICAL PROCEDURES:"<<endl;
        cout<<"0. PROSTATECTONCY(PROSTRATE REMOVAL) "<<endl;
        cout<<"1. NEPHRECTOMY(KIDNEY REMOVAL)"<<endl;
        cout<<"2. CYSTOSCOPY AND BLADDER BIOPSY"<<endl;
        cout<<"3. URETEROSCOPY(FOR KIDNEY STONES)"<<endl;
        cout<<"4. VASECTOMY\n\n"<<endl;
    }
  void uroequip()
    {

        y[0]= 150;
        y[1]= 200;
        y[2]= 500;
        y[3]=150;
        y[4]= 300;


    }
   void urocost()
    {
        x[0]= 125;
        x[1] = 200;
        x[2] = 300;
        x[3] = 100;
        x[4] = 400;

    }
};
class opthalmic
{
    public:
    double x[5];
    float cost;
    float y[5];
    opthalmic()
    {
        cout<<"\t\t\tSELECT TYPE OF OPTHALMIC PROCEDURES:"<<endl;
        cout<<"0. CATARACT SURGERY "<<endl;
        cout<<"1. LASIK EYE SURGERY"<<endl;
        cout<<"2. RETINAL DETACHMENT REPAIR"<<endl;
        cout<<"3. GLAUCOMA SURGERY"<<endl;
        cout<<"4. CORNEAL TRANSPLANTATION\n\n"<<endl;
    }
   void opthalmicequip()
    {

        y[0]= 250;
        y[1]= 200;
        y[2]= 250;
        y[3]= 170;
        y[4]= 400;


    }
   void opthalmiccost()
    {
        x[0]= 375;
        x[1] = 180;
        x[2] = 270;
        x[3] = 360;
        x[4] = 190;

    }
};
class gynecological
{
    public:
    double x[5];
    float cost;
    float y[5];
    gynecological()
    {
        cout<<"\t\t\tSELECT TYPE OF GYNECOLOGICAL PROCEDURES:"<<endl;
        cout<<"0. HYSTERECTOMY(PARTIAL OR TOTAL) "<<endl;
        cout<<"1. CESAREAN SECTION(C SECTION)"<<endl;
        cout<<"2. ENDOMETRIAL ABLATION"<<endl;
        cout<<"3. TUBAL LIGATION(STERILIZATION)"<<endl;
        cout<<"4. OVARIAN CYSTERTOMY\n\n"<<endl;
    }
  void gynoequip()
    {

        y[0]= 100;
        y[1]= 600;
        y[2]= 500;
        y[3]= 800;
        y[4]= 200;


    }
   void gynocost()
    {
        x[0]= 240;
        x[1] = 145;
        x[2] = 189;
        x[3] = 239;
        x[4] = 150;

    }
};

int main()
{
    int x;
    do{
    display();
    cout<<"\t\t\tSELECT ANY NUMBER ";
    cout<<endl;
    cin>> x;
    switch (x)
    {
        case 1:
        {
            cout<<"\n\n \t\t WELCOME TO PATIENT REGISTRATION SECTION \n";
        patient a;

        a.displaypat();




        }
        break;

        case 2:
        {
            cout<<"\n\n \t\t WELCOME TO DOCTOR REGISTRATION SECTION \n";
            doctor b;
            b.displaydoc();

        }
        break;

        case 3:
       {
        int a;
        billing d;
        long double bill=0;
        float cost_of_equipment = 0;
        long double Total_bill=0;
        do{
        cout<<"\t\t\tSELECT WHAT YOU WANT"<<endl;
        appoin();
        cin>>a;
        switch(a)
        {
            case 1:{
                bill+=50;
                cost_of_equipment+=0;
                Total_bill+=50;
                cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                cout<<"\t\t\tRs."<<0<<"\t\t\tRs."<<50<<"\n";
            }
            break;

            case 2:
            {
                int x;
                do{
                procedures();
                cin>>x;
                int y;
                switch(x)
                {
                    case 1:
                    {
                        int mi;
                        minor m[1];
                        cin>>mi;
                        m[1].minorcost();
                        m[1].minorequip();
                        m[1].cost = m[1].x[mi];
                        bill += m[1].x[mi];
                        cost_of_equipment += m[1].y[mi];
                        Total_bill+= m[1].x[mi]+m[1].y[mi];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                        cout<<"\t\t\tRs."<<m[1].y[mi]<<"\t\t\tRs."<<m[1].x[mi]<<"\n";
                    }
                    break;

                    case 3:
                    {
                        int ma;
                        major m[1];
                        cin>>ma;
                        m[1].majorcost();
                        m[1].majorequip();
                        m[1].cost = m[1].x[ma];
                        bill+= m[1].x[ma];
                        cost_of_equipment+=m[1].y[ma];
                        Total_bill+= m[1].x[ma]+m[1].y[ma];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                         cout<<"\t\t\tRs."<<m[1].y[ma]<<"\t\t\tRs."<<m[1].x[ma]<<"\n";

                    }
                    break;

                    case 2:
                    {
                        int co;
                        common m[1];
                        cin>>co;
                        m[1].commonequip();
                        m[1].commoncost();
                        m[1].cost = m[1].x[co];
                        bill+= m[1].x[co];
                        cost_of_equipment+=m[1].y[co];
                        Total_bill+= m[1].x[co]+m[1].y[co];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                        cout<<"\t\t\tRs."<<m[1].y[co]<<"\t\t\tRs."<<m[1].x[co]<<"\n";
                    }
                    break;

                    case 4:
                    {
                        int ort;
                        orthopedic m[1];
                        cin>>ort;
                        m[1].orthocost();
                        m[1].orthoequip();
                        m[1].cost = m[1].x[ort];
                        bill+= m[1].x[ort];
                        cost_of_equipment+=m[1].y[ort];
                        Total_bill+= m[1].x[ort]+m[1].y[ort];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                        cout<<"\t\t\tRs."<<m[1].y[ort]<<"\t\t\tRs."<<m[1].x[ort]<<"\n";

                    }
                    break;

                    case 5:
                    {
                        int neu;
                        neurosurgical m[1];
                        cin>>neu;
                        m[1].neurocost();
                        m[1].neuroequip();
                        m[1].cost = m[1].x[neu];
                        bill+= m[1].x[neu];
                        cost_of_equipment+=m[1].y[neu];
                        Total_bill+= m[1].x[neu]+m[1].y[neu];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                        cout<<"\t\t\tRs."<<m[1].y[neu]<<"\t\t\tRs."<<m[1].x[neu]<<"\n";

                    }
                    break;

                    case 6:
                    {
                        int cos;
                        cosmetic m[1];
                        cin>>cos;
                        m[1].cosmeticcost();
                        m[1].cosmeticequip();
                        m[1].cost = m[1].x[cos];
                        bill+= m[1].x[cos];
                        cost_of_equipment+=m[1].y[cos];
                        Total_bill+= m[1].x[cos]+m[1].y[cos];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                        cout<<"\t\t\tRs."<<m[1].y[cos]<<"\t\t\tRs."<<m[1].x[cos]<<"\n";

                    }
                    break;

                    case 7:
                    {
                        int gas;
                        gastrointestinal m[1];
                        cin>>gas;
                        m[1].gastrocost();
                        m[1].gastroequip();
                        m[1].cost = m[1].x[gas];
                        bill+= m[1].x[gas];
                        cost_of_equipment+=m[1].y[gas];
                        Total_bill+= m[1].x[gas]+m[1].y[gas];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                        cout<<"\t\t\tRs."<<m[1].y[gas]<<"\t\t\tRs."<<m[1].x[gas]<<"\n";
                    }
                    break;

                    case 8:
                    {
                    int uro;
                        urological m[1];
                        cin>>uro;
                        m[1].urocost();
                        m[1].uroequip();
                        m[1].cost = m[1].x[uro];
                        bill+= m[1].x[uro];
                        cost_of_equipment+=m[1].y[uro];
                        Total_bill+= m[1].x[uro]+m[1].y[uro];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                        cout<<"\t\t\tRs."<<m[1].y[uro]<<"\t\t\tRs."<<m[1].x[uro]<<"\n";
                    }
                    break;
                    case 9:
                    {

                        int opt;
                        opthalmic m[1];
                        cin>>opt;
                        m[1].opthalmiccost();
                        m[1].opthalmicequip();
                        m[1].cost = m[1].x[opt];
                        bill+= m[1].x[opt];
                        cost_of_equipment+=m[1].y[opt];
                        Total_bill+= m[1].x[opt]+m[1].y[opt];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                        cout<<"\t\t\tRs."<<m[1].y[opt]<<"\t\t\tRs."<<m[1].x[opt]<<"\n";
                    }
                    break;

                    case 10:
                    {
                        int gyn;
                        gynecological m[1];
                        cin>>gyn;
                        m[1].gynocost();
                        m[1].gynoequip();
                        m[1].cost = m[1].x[gyn];
                        bill+= m[1].x[gyn];
                        cost_of_equipment+=m[1].y[gyn];
                        Total_bill+= m[1].x[gyn]+m[1].y[gyn];
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                         cout<<"\t\t\tRs."<<m[1].y[gyn]<<"\t\t\tRs."<<m[1].x[gyn]<<"\n";


                    }
                    break;

                    default: cout<<"\t\t\tPROCEDURES MENU EXIT "<<endl;
                    break;
                }
                }while(x>0 && x<11);


            }
            break;
            case 3:
            {
                int x;
                do{
                    test();
                    cin>>x;
                    switch (x)
                    {
                    case 1:
                    {
                        bill+=400;
                        cost_of_equipment+=0;
                        Total_bill+=400;
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                cout<<"\t\t\tRs."<<0<<"\t\t\tRs."<<400<<"\n";
                    }
                        break;
                     case 2:
                    {
                        bill+=300;
                        cost_of_equipment+=0;
                        Total_bill+=300;
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                cout<<"\t\t\tRs."<<0<<"\t\t\tRs."<<300<<"\n";
                    }
                        break;
                         case 3:
                    {
                        bill+=500;
                        cost_of_equipment+=0;
                        Total_bill+=500;
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                cout<<"\t\t\tRs."<<0<<"\t\t\tRs."<<500<<"\n";
                    }
                        break;
                         case 4:
                    {
                        bill+=600;
                        cost_of_equipment+=0;
                        Total_bill+=600;
                        cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                cout<<"\t\t\tRs."<<0<<"\t\t\tRs."<<600<<"\n";
                    }
                        break;
                        default: cout<<"\t\t\tPROCEDURES MENU EXIT "<<endl;
                        break;
                    }
                }while(x>0&&x<5);
            }
            break;
            case 4:
            {
                bill+=100;
                cost_of_equipment+=100;
                Total_bill+=200;
                cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\n\n";
                cout<<"\t\t\tRs."<<100<<"\t\t\tRs."<<100<<"\n";
            }
        }
        }while(a>0 && a<5);

                cout<<"\t\tCOST OF SERVICES\tCOST OF MEDICATION AND EQUIPMENT\tTotal Bill\n\n";
                cout<<"\t\t\tRs."<<cost_of_equipment<<"\t\t\tRs."<<bill<<"\t\t\tRs."<<Total_bill<<"\n";
       }
        break;

        default:
        cout<<"\t\t\tMENU EXIT\n\n";
        break;
        }
    }while(x!=0);
    cout<<"\t\t\t THANK YOU FOR USING OUR SYSTEM"<<endl;
    return 0;
}
