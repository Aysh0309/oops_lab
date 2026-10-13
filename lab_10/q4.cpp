
#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
    int printSpeed;
    bool isColor;

public:
    Printer(int speed, bool color) {
        printSpeed = speed;
        isColor = color;
    }

    void printDocument(string fileName) {
        cout << "Printing document: " << fileName << endl;
        cout << "Print speed: " << printSpeed << " pages per minute" << endl;
    }
};

class Scanner {
protected:
    int resolution;
    string scanType;

public:
    Scanner(int res, string type) {
        resolution = res;
        scanType = type;
    }

    void scanDocument(string fileName) {
        cout << "Scanning document: " << fileName << endl;
        cout << "Resolution: " << resolution << " DPI" << endl;
    }
};

class MultiFunctionPrinter : public Printer, public Scanner {
private:
    string modelName;

public:
    MultiFunctionPrinter(string model, int speed, bool color,
                         int res, string type)
        : Printer(speed, color), Scanner(res, type) {
        modelName = model;
    }

    void copyDocument(string fileName) {
        cout << "\nCopying document..." << endl;
        scanDocument(fileName);
        printDocument(fileName);
    }

    void displayDetails() {
        cout << "Model Name: " << modelName << endl;
        cout << "Print Speed: " << printSpeed << " pages per minute" << endl;
        cout << "Color Printing: "
             << (isColor ? "Yes" : "No") << endl;
        cout << "Scanner Resolution: " << resolution << " DPI" << endl;
        cout << "Scan Type: " << scanType << endl;
    }
};

int main() {
    MultiFunctionPrinter mfp("HP Smart Tank", 15, true, 1200, "Flatbed");

    cout << " Printer Details " << endl;
    mfp.displayDetails();

    cout << "\n Printing Document " << endl;
    mfp.printDocument("Assignment.pdf");

    cout << "\n Scanning Document " << endl;
    mfp.scanDocument("Assignment.pdf");

    cout << "\nCopying Document " << endl;
    mfp.copyDocument("Assignment.pdf");

    return 0;
}
