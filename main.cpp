#include <iostream>

using namespace std;

void inputBasicSalary(float salary[]);
void inputFantaSales(int fantaSales[]);
void inputCocaColaSales(int cocaColaSales[]);
void inputSpriteSales(int spriteSales[]);
void calculateTotalSales(int fantaSales[],int cocaColaSales[],int spriteSales[],int totalSales[]);
void calculateCommission(int totalSales[], float commission[]);
void calculateGrossSalary(int totalSales[], float commission[], float grossSalary[]);
void print(int totalSales[], float commission[], float grossSalary[]);

int main()
{
    float salary[100];
    int fantaSales[100];
    int cocaColaSales[100];
    int spriteSales[100];
    int totalSales[100];
    float commission[100];
    float grossSalary[100];

    inputBasicSalary(salary);
    inputFantaSales(fantaSales);
    inputCocaColaSales(cocaColaSales);
    inputSpriteSales(spriteSales);
    calculateTotalSales(fantaSales, cocaColaSales, spriteSales, totalSales);
    calculateCommission(totalSales, commission);
    calculateGrossSalary(totalSales, commission, grossSalary);
    print(totalSales, commission, grossSalary);

}

void inputBasicSalary(float salary[]){
    for(int i=0;i<100;i++){
        cout << "Enter Salary of Person " << i+1 << " : " ;
        cin >>  salary[i];
    }
}

void inputFantaSales(int fantaSales[]){
    for(int i=0;i<100;i++){
        cout << "Enter Fanta sales of Person " << i+1 << " : ";
        cin >>  fantaSales[i];
    }
}

void inputCocaColaSales(int cocaColaSales[]){
    for(int i=0;i<100;i++){
        cout << "Enter Coca Cola sales of Person " << i+1 << " : ";
        cin >>  cocaColaSales[i];
    }
}

void inputSpriteSales(int spriteSales[]){
    for(int i=0;i<100;i++){
        cout << "Enter Sprite sales of Person " << i+1 << " : ";
        cin >>  spriteSales[i];
    }
}

void calculateTotalSales(int fantaSales[],int cocaColaSales[],int spriteSales[],int totalSales[]){
    for(int i=0;i<100;i++){
        totalSales[i] = fantaSales[i] + cocaColaSales[i] + spriteSales[i] ;
    }
}

void calculateCommission(int totalSales[], float commission[]){
    for(int i=0;i<100;i++){
        if(totalSales[i] > 0 && totalSales[i] <= 25000){
            commission[i] = 0.0f;
        }else if(totalSales[i] > 25000 && totalSales[i] <= 50000){
            commission[i] = 0.25f;
        }else if(totalSales[i] > 25000){
            commission[i] = 0.50f;
        }
    }
}

void calculateGrossSalary(int totalSales[], float commission[], float grossSalary[]){
    for(int i=0;i<100;i++){
        grossSalary[i] = totalSales[i] + (totalSales[i] * commission[i]);
    }
}

void print(int totalSales[], float commission[], float grossSalary[]){
    for(int i=0;i<100;i++){
        cout << "Total sales of person " << i+1 << " is " << totalSales[i] << endl;
        cout << "Commission of person " << i+1 << " is " << commission[i] << endl;
        cout << "Gross salary of person " << i+1 << " is " << grossSalary[i] << endl << endl;
    }
}


