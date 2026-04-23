#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <ctime>

using namespace std;

/* ---------------- HANDBOOK ---------------- */

void handbook()
{
    while (true) {
        int sb_loop;
        int sb_part;
        int dc_type;

        cout << "Do you want to continue viewing the student handbook? (1 = yes, 2 = no): ";
        cin >> sb_loop;

        if (sb_loop == 2) {
            break;
        } else if (sb_loop == 1) {
            cout << "Which part of the student handbook would you like to view?\n";
            cout << "1. Student Dress code\n";
            cout << "2. Campus rules and regulations\n";
            cout << "3. Campus details\n";
            cout << "Enter the part (1-3): ";
            cin >> sb_part;

            if (sb_part == 1) {
                cout << "Insert student dress code plspls\n";
                cout << "Would you like to view the types of uniforms? (1 = yes, 2 = no): ";
                cin >> dc_type;

                if (dc_type == 1) {
                    cout << "\nTYPES OF UNIFORM:\n";
                    cout << "1. Type A uniform:\n";
                    cout << "2. Summer uniform:\n";
                    cout << "3. PE uniform:\n";
                    cout << "4. Casual clothing:\n";
                } else if (dc_type != 2) {
                    cout << "Invalid choice\n";
                }
            } else if (sb_part == 2) {
                cout << "Campus rules here\n";
            } else if (sb_part == 3) {
                cout << "Campus details here\n";
            } else {
                cout << "Invalid choice\n";
            }
        } else {
            cout << "Invalid choice\n";
        }
    }
}

/* ---------------- EMAIL ---------------- */

void email()
{
    string email;
    cin.ignore();

    cout << "Enter your email: ";
    getline(cin,email);

    if (email.length()<20) {
        cout << "Email is Invalid";
        return;
    }

    if (email.length()>=20) {
        string insti = email.substr(email.length() - 18);

        while (insti != "@cbzrc.pshs.edu.ph") {

            cout << "Enter your email: ";
            getline(cin,email);

            while (email.length()<20) {
                cout << "Enter your email: ";
                getline(cin,email);
            }

            if (email.length()>=20) {
                insti = email.substr(email.length() - 18);
            }

            if (insti != "@cbzrc.pshs.edu.ph") {
                continue;
            }
        }
    }
}

/* ---------------- WIFI PASSWORDS ---------------- */

void wifi()
{
    while (true) {
        int wifi_p;

        cout << "Would you like to view the wifi passwords of rooms you have access to? (1-Yes, 2 = No) ";
        cin >> wifi_p;

        if (wifi_p == 1) {
            cout << "PASSWORDS: " << "\n";
            cout << "1. Placeholder password-" << "\n";
            continue;
        }

        else if (wifi_p == 2) {
            cout << "Exiting..." << "\n";
            break;
        }

        else {
            cout << "Invalid choice!" << "\n";
            continue;
        }
    }
}

/* ---------------- SCO LOST AND FOUND ---------------- */

void sco()
{
    while (true) {

        int sco_choice;

        cout << "Would you like to view the SCO's lost and found (1 = Yes, 2 = No)?: " << "\n";
        cin >> sco_choice;

        if (sco_choice == 1) {
            cout << "Go to https://drive.google.com/drive/folders/15-ZeYqsFtODMJIhxE2nZ4_T-xfw39uA- to view the lost and found list." << "\n";
            continue;
        }

        else if (sco_choice == 2) {
            cout << "Exiting.." << "\n";
            break;
        }

        else {
            cout << "Invalid choice" << "\n";
            continue;
        }
    }
}

/* ---------------- GRADE ---------------- */

void grade()
{
    int grade;
    string section;

    cout << "Enter your grade level (7-12): ";
    cin >> grade;

    if (grade<7 || grade>12) {
        return;
    }

    else if (grade==7) {
        cout << "Enter your section (Diamond, Jade, Ruby, or Sapphire): ";
        cin >> section;
    }

    else if (grade==8) {
        cout << "Enter your section (Adelfa, Ilang, Sampaguita, or Waling): ";
        cin >> section;
    }

    else if (grade==9) {
        cout << "Enter your section (Argon, Krypton, Neon, or Xenon): ";
        cin >> section;
    }

    else if (grade==10) {
        cout << "Enter your section (Electron, Gluon, Muon or Proton): ";
        cin >> section;
    }

    else if (grade==11) {
        cout << "Enter your section (Poralis, Rigel, Sirius, or Vega): ";
        cin >> section;
    }

    else if (grade==12) {
        cout << "Enter your section (Banahaw, Batulao, Makiling, or Malarayat): ";
        cin >> section;
    }
}

/* ---------------- MENU PROGRAM ---------------- */

void menu()
{
	// Initialization
	int cmenu;
	string canns;
	string password;
	int adanns;
	int grade;
	string section;
	string emp;
	
	// Grade Input
	cout << "Enter your grade level (7-12): ";
	cin >> grade;
	
	// Checking if the grade level is valid
	if (grade<7 || grade>12) {
		return;
	}
	// Grade 7 sections
	else if (grade==7) {
		cout << "Enter your section (Diamond, Jade, Ruby, or Sapphire): ";
		cin >> section;
		// Checking if section is valid
		while (section != "Diamond" && section != "diamond" && section != "Jade" && section != "jade" && section != "Ruby" && section != "ruby" && section != "Sapphire" && section !="sapphire") {
			cout << "Section is Invalid, Please try again: ";
			cin >> section;
		}
	}
	// Grade 8 sections
	else if (grade==8) {
		cout << "Enter your section (Adelfa, Ilang, Sampaguita, or Waling): ";
		cin >> section;
		// Checking if section is valid
		while (section != "Adelfa" && section != "adelfa" && section != "Ilang" && section != "ilang" && section != "Sampaguita" && section != "sampaguita" && section != "Waling" && section != "waling") {
			cout << "Section is Invalid, Please try again: ";
			cin >> section;
		}
	}
	// Grade 9 sections
	else if (grade==9) {
		cout << "Enter your section (Argon, Krypton, Neon, or Xenon): ";
		cin >> section;
		// Checking if section is valid
		while (section != "Argon" && section != "argon" && section != "Krypton" && section != "krypton" && section != "Neon" && section != "neon" && section != "Xenon" && section != "xenon") {
			cout << "Section is Invalid, Please try again: ";
			cin >> section;
		}
	}
	// Grade 10 sections
	else if (grade==10) {
		cout << "Enter your section (Electron, Gluon, Muon or Proton): ";
		cin >> section;
		// Checking if section is valid
		while (section != "Electron" && section != "electron" && section != "Gluon" && section != "gluon" && section != "Muon" && section != "muon" && section != "Proton" && section != "proton") {
			cout << "Section is Invalid, Please try again: ";
			cin >> section;
		}
	}
	// Grade 11 sections
	else if (grade==11) {
		cout << "Enter your section (Polaris, Rigel, Sirius, or Vega): ";
		cin >> section;
		// Checking if section is valid
		while (section != "Polaris" && section != "polaris" && section != "Rigel" && section != "rigel" && section != "Sirius" && section != "sirius" && section != "Vega" && section != "vega") {
			cout << "Section is Invalid, Please try again: ";
			cin >> section;
		}
	}
	// Grade 12 sections
	else if (grade==12) {
		cout << "Enter your section (Banahaw, Batulao, Makiling, or Malarayat): ";
		cin >> section;
		// Checking if section is valid
		while (section != "Banahaw" && section != "banahaw" && section != "Batulao" && section != "batulao" && section != "Makiling" && section != "makiling" && section != "Malarayat" && section != "malarayat") {
			cout << "Section is Invalid, Please try again: ";
			cin >> section;
		}
	}
	
	// Menus
	while (true){
        cout << "=== Main Menu ===" << endl;
        cout << "1. Campus Announcements" << endl;
        cout << "2. Class Schedule" << endl;
        cout << "3. Cafeteria and Coop Food Menu" << endl;
        cout << "4. Student Info" << endl;
        cout << "5. Borrowed Books" << endl;
        cout << "6. Lost and Found" << endl;
        cout << "0. Exit Program" << endl;
        cout << "Which Menu Would You Like To Access: ";
        cin >> cmenu;
	
        // Menu Selection
        while (cmenu<0 || cmenu>6) {
            cout << " " << endl;
            cout << "Invalid Input, Try Again" << endl;
            cout << " " << endl;
            cout << "=== Menus ===" << endl;
            cout << "1. Announcements" << endl;
            cout << "2. Class Schedule" << endl;
            cout << "3. Cafeteria and Coop Food Menu" << endl;
            cout << "4. Student Info" << endl;
            cout << "5. Borrowed Books" << endl;
            cout << "0. Exit Program" << endl;
            cout << "Which Menu Would You Like To Access: "; 
            cin >> cmenu;
        }

        // Announcements
        while (cmenu == 1) {
            cout << "=== Announement Menu ===" << endl;
            cout << "A. Campus-Wide Announcements" << endl;
            cout << "B. Batch Announcements" << endl;
            cout << "C. Class Announcements" << endl;
            cout << "D. Add Announcements (For Officers/Teaching Staff)" << endl;
            cout << "E. Go Back to Main Menu" << endl;
            cout << "Which Announcements Would You Like To See: ";
            cin >> canns;

            if (canns == "A" or canns == "a") {
                cout << "Code is under construction" << endl;
            }
            else if (canns == "B" or canns == "b") {
                cout << "Code is under construction" << endl;
            }
            else if (canns == "C" or canns == "c") {
                cout << "Code is under construction" << endl;
            }
            else if (canns == "D" or canns == "d") {
                cout << "Enter Password Before Continuing (Enter 'Exit' to leave): ";
                cin >> password;
                
                while (password != "B@likeskwel@" && password != "Exit" && password != "exit") {
                    cout << "Wrong Password, Try Again (or 'Exit'): ";
                    cin >> password;
                }
                if (password == "Exit" || password == "exit") {
                    return;
                }
                
                cout << "Access granted" << endl;
                    
                // Admin Board
                cout << "=== Announcement Board ===" << endl;
                cout << "1. Add new announcement" << endl;
                cout << "2. View all announcements" << endl;
                cout << "3. Clear all announcements" << endl;
                cout << "Press Any Other Number to Exit" << endl;
                cout << "What Would You Like To Do: ";
                cin >> adanns;
                switch (adanns) {
                    case 1:
                    cout << "Code Under Construction" << endl;
                    return;
                    case 2:
                    cout << "Code Under Construction" << endl;
                    return;
                    case 3:
                    cout << "Code Under Construction" << endl;
                    return;
                }
            }
            else if (canns == "E" or canns == "e") {
                return; // Changed to return so it takes you to the initial menu
            }
        }

        // Class Schedules
        while (cmenu==2) {
            // Grade 7 Sections
            if (grade==7) {
                // Diamond
                if (section == "Diamond" || section == "diamond") {
                    cout << "=== Diamond's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Ruby
                if (section == "Ruby" || section == "ruby") {
                    cout << "=== Ruby's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                    cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Jade
                if (section == "Jade" || section == "jade") {
                    cout << "=== Jade's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Sapphire (Best Section)
                if (section == "Sapphire" || section == "sapphire") {
                    cout << "=== Sapphire's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
            }
            // Grade 8 Sections
            if (grade==8) {
                // Waling
                if (section == "Waling" || section == "waling") {
                    cout << "=== Waling's Class Schdule ===" << endl;
                    cout << "Please visit https://drive.google.com/file/d/1oLdYThM9y_Fb_ykixO1u0tITyKbETcff/view?usp=drivesdk to view the schedule." << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Ilang (Also Best Section)
                if (section == "Ilang" || section == "ilang") {
                    cout << "=== Ilang's Class Schdule ===" << endl;
                    cout << "Please visit https://drive.google.com/file/d/1smJgII6vthVT0DMN5-U5pJX7C5ks1Im3/view?usp=drivesdk to view the schedule." << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Adelfa
                if (section == "Adelfa" || section == "adelfa") {
                    cout << "=== Adelfa's Class Schdule ===" << endl;
                    cout << "Please visit https://drive.google.com/file/d/1YdbofiUQchgZzMIVsG1DHkXIRlRl_jeG/view?usp=drivesdk to view the schedule." << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Sampaguita (worst section)
                if (section == "Sampaguita" || section == "sampaguita") {
                    cout << "=== Sampaguita's Class Schdule ===" << endl;
                    cout << "Please visit https://drive.google.com/file/d/1Knhpoyk0wciuZKl8NRzaIR5UZitPSDUN/view?usp=drivesdk to view the schedule." << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
            }
            // Grade 9 Sections
            if (grade==9) {
                // Argon
                if (section == "Argon" || section == "argon") {
                    cout << "=== Argon's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break  
                    }
                }
                // Xenon
                if (section == "Xenon" || section == "xenon") {
                    cout << "=== Xenon's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Krypton
                if (section == "Krypton" || section == "krypton") {
                    cout << "=== Krypton's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Neon
                if (section == "Neon" || section == "neon") {
                    cout << "=== Neon's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
            }
            // Grade 10
            if (grade==10) {
                // Proton
                if (section == "Proton" || section == "proton") {
                    cout << "=== Proton's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Muon
                if (section == "Muon" || section == "muon") {
                    cout << "=== Muon's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Gluon
                if (section == "Gluon" || section == "gluon") {
                    cout << "=== Gluon's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Electron
                if (section == "Electron" || section == "electron") {
                    cout << "=== Electron's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
            }
            // Grade 11
            if (grade==11) {
                // Rigel
                if (section == "Rigel" || section == "rigel") {
                    cout << "=== Rigel's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Vega
                if (section == "Vega" || section == "vega") {
                    cout << "=== Vega's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Polaris
                if (section == "Polaris" || section == "polaris") {
                    cout << "=== Polaris' Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Sirius
                if (section == "Sirius" || section == "sirius") {
                    cout << "=== Sirius' Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
            }
            // Grade 12 Sections
            if (grade==12) {
                // Banahaw
                if (section == "Banahaw" || section == "banahaw") {
                    cout << "=== Banahaw's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Makiling
                if (section == "Makiling" || section == "makiling") {
                    cout << "=== Makiling's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
                // Batulao
                if (section == "Batulao" || section == "batulao") {
                    cout << "=== Batulao's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp=="A" || emp=="a") {
                        return; // Changed to return from break
                    }
                }
                // Malarayat
                if (section == "Malarayat" || section == "malarayat") {
                    cout << "=== Malarayat's Class Schdule ===" << endl;
                    cout << "Code Under Construction" << endl;
                    cout << "Press The 'A' Key To go back to Main Menu: ";
                    cin >> emp;
                    while (emp!="A" && emp != "a") {
                        cout << "Wrong Key, Try Again: ";
                        cin >> emp;
                    }
                    if (emp == "A" || emp == "a") {
                        return; // Changed to return from break
                    }
                }
            }
        }
        while (cmenu==3) {
            cout << "Code Under Construction" << endl;
            cout << "Press The 'A' Key To go back to Main Menu: ";
            cin >> emp;
            while (emp!="A" && emp != "a") {
                cout << "Wrong Key, Try Again: ";
                cin >> emp;
            }
            if (emp == "A" || emp == "a") {
                return; // Changed to return from break
            }
        }
        while (cmenu==4) {
            cout << "Code Under Construction" << endl;
            cout << "Press The 'A' Key To go back to Main Menu: ";
            cin >> emp;
            while (emp!="A" && emp != "a") {
                cout << "Wrong Key, Try Again: ";
                cin >> emp;
            }
            if (emp == "A" || emp == "a") {
                return; // Changed to return from break
            }
        }
        while (cmenu==5) {
            cout << "Code Under Construction" << endl;
            cout << "Press The 'A' Key To go back to Main Menu: ";
            cin >> emp;
            while (emp!="A" && emp != "a") {
                cout << "Wrong Key, Try Again: ";
                cin >> emp;
            }
            if (emp == "A" || emp == "a") {
                return; // Changed to return from break
            }
        }
        while (cmenu==6) {
            cout << "Code Under Construction" << endl;
            cout << "Press The 'A' Key To go back to Main Menu: ";
            cin >> emp;
            while (emp!="A" && emp != "a") {
                cout << "Wrong Key, Try Again: ";
                cin >> emp;
            }
            if (emp == "A" || emp == "a") {
                return; // Changed to return from break
            }
        }
        if (cmenu==0) {
            return; // Changed to return so pressing 0 also goes back to initial menu
        }
    }
}

/* ---------------- MAIN PROGRAM ---------------- */

int main()
{
    int choice;

    cout << "=====================================\n";
    cout << " Welcome to the Student Information System\n";
    cout << "=====================================\n";

    while (true)
    {
        cout << "\nSelect where you want to go:\n";
        cout << "1. Main Menu\n";
        cout << "2. Handbook\n";
        cout << "3. Email\n";
        cout << "4. Grade\n";
        cout << "5. Wifi Passwords\n";
        cout << "6. SCO Lost and Found\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                menu();
                break;

            case 2:
                handbook();
                break;

            case 3:
                email();
                break;

            case 4:
                grade();
                break;

            case 5:
                wifi();
                break;

            case 6:
                sco();
                break;

            case 0:
                cout << "Program Closed.\n";
                return 0;

            default:
                cout << "Invalid Choice\n";
		}
	}
    return 0;
}


// yayayayayayayayayayayay were donenenenenene -hadi (no ones gonna see this right)