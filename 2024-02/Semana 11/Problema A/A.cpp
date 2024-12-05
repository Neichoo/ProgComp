#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<string> precalcT = {"Timru", "Timur", "Tirmu", "Tirum", "Tiumr", "Tiurm", "Tmiru",
                                "Tmiur", "Tmriu", "Tmrui", "Tmuir", "Tmuri", "Trimu", "Trium", "Trmiu", 
                                "Trmui", "Truim", "Trumi", "Tuimr", "Tuirm", "Tumir", "Tumri", "Turim", "Turmi"};
    vector<string> precalcI = {"iTmru", "iTmur", "iTrmu", "iTrum", "iTumr", "iTurm", "imTru",
                                "imTur", "imrTu", "imruT", "imuTr", "imurT", "irTmu", "irTum", "irmTu", 
                                "irmuT", "iruTm", "irumT", "iuTmr", "iuTrm", "iumTr", "iumrT", "iurTm", "iurmT"};
    vector<string> precalcM = {"mTiru", "mTiur", "mTriu", "mTrui", "mTuir", "mTuri", "miTru",
                                "miTur", "mirTu", "miruT", "miuTr", "miurT", "mrTiu", "mrTui", "mriTu", 
                                "mriuT", "mruTi", "mruiT", "muTir", "muTri", "muiTr", "muirT", "murTi", "muriT"};
    vector<string> precalcR = {"rTimu", "rTium", "rTmiu", "rTmui", "rTuim", "rTumi", "riTmu",
                                "riTum", "rimTu", "rimuT", "riuTm", "riumT", "rmTiu", "rmTui", "rmiTu", 
                                "rmiuT", "rmuTi", "rmuiT", "ruTim", "ruTmi", "ruiTm", "ruimT", "rumTi", "rumiT"};
    vector<string> precalcU = {"uTimr", "uTirm", "uTmir", "uTmri", "uTrim", "uTrmi", "uiTmr",
                                "uiTrm", "uimTr", "uimrT", "uirTm", "uirmT", "umTir", "umTri", "umiTr", 
                                "umirT", "umrTi", "umriT", "urTim", "urTmi", "uriTm", "urimT", "urmTi", "urmiT"};
    int tampreT = precalcT.size();
    int tampreI = precalcI.size();
    int tampreM = precalcM.size();
    int tampreR = precalcR.size();
    int tampreU = precalcU.size();
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int tam;
        string palabra;
        cin >> tam;
        cin >> palabra;
        if(tam != 5) {
            cout << "NO" << endl;
        } else {
            bool encontrado = false;
            if(palabra[0] == 'T') {
                for(int j = 0; j < tampreT; j++) {
                    if(palabra == precalcT[j]) {
                        cout << "YES" << endl;
                        encontrado = true;
                        break;
                    }
                }
            } else if(palabra[0] == 'i') {
                for(int j = 0; j < tampreI; j++) {
                    if(palabra == precalcI[j]) {
                        cout << "YES" << endl;
                        encontrado = true;
                        break;
                    }
                }
            } else if(palabra[0] == 'm') {
                for(int j = 0; j < tampreM; j++) {
                    if(palabra == precalcM[j]) {
                        cout << "YES" << endl;
                        encontrado = true;
                        break;
                    }
                }
            } else if(palabra[0] == 'r') {
                for(int j = 0; j < tampreR; j++) {
                    if(palabra == precalcR[j]) {
                        cout << "YES" << endl;
                        encontrado = true;
                        break;
                    }
                }
            } else if(palabra[0] == 'u') {
                for(int j = 0; j < tampreU; j++) {
                    if(palabra == precalcU[j]) {
                        cout << "YES" << endl;
                        encontrado = true;
                        break;
                    }
                }
            }
            if(!encontrado) {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}