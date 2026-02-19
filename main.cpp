 int main(int, char**)

{
	int main(int, char**)
	// ✅ ADICIONAR AQUI (antes de tudo):
#include "kernel.h"
	mem::Init();  // Inicializar o driver kernel

	WNDCLASSEXW wc;
	wc.cbSize = sizeof(WNDCLASSEXW);
	wc.style = CS_CLASSDC;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = NULL;
	wc.cbWndExtra = NULL;
	wc.hInstance = nullptr;
	wc.hIcon = LoadIcon(0, IDI_APPLICATION);
	wc.hCursor = LoadCursor(0, IDC_ARROW);
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = L"POKEMON ";
	wc.lpszClassName = L"POKEMON ";
	wc.hIconSm = LoadIcon(0, IDI_APPLICATION);

	RegisterClassExW(&wc);
#include "imgui/imgui_internal.h"

#define STB_IMAGE_IMPLEMENTATION

#include "globals.h"
#include <dwmapi.h>
#include <random>
#include <string>
#include <thread>
#include <vector>
#include <fstream>
#include "string.h"
#include <string>
#include "skCrypter.h"
#include <tchar.h>
#include <string.h>
#include <Windows.h>
#include "variable.h"
#include "string.h"
#include "keybinder.hpp"
#include <string>
#include <iostream>
#include <filesystem>
#include <vector>
#include <windows.h>
#include <sstream>
#include <algorithm>
#include "xor.h"

struct Vector1
{
	double x;
	double y;
};

/*None  { { 0.0 } },
AK-47 { {0.000000,-2.257792},{0.323242,-2.300758},{0.649593,-2.299759},{0.848786,-2.259034},{1.075408,-2.323947},{1.268491,-2.215956},{1.330963,-2.236556},{1.336833,-2.218203},{1.505516,-2.143454},{1.504423,-2.233091},{1.442116,-2.270194},{1.478543,-2.204318},{1.392874,-2.165817},{1.480824,-2.177887},{1.597069,-2.270915},{1.449996,-2.145893},{1.369179,-2.270450},{1.582363,-2.298334},{1.516872,-2.235066},{1.498249,-2.238401},{1.465769,-2.331642},{1.564812,-2.242621},{1.517519,-2.303052},{1.422433,-2.211946},{1.553195,-2.248043},{1.510463,-2.285327},{1.553878,-2.240047},{1.520380,-2.221839},{1.553878,-2.240047},{1.553195,-2.248043} },
LR-300 { {0.000000,-2.052616},{0.055584,-1.897695},{-0.247226,-1.863222},{-0.243871,-1.940010},{0.095727,-1.966751},{0.107707,-1.885520},{0.324888,-1.946722},{-0.181137,-1.880342},{0.162399,-1.820107},{-0.292076,-1.994940},{0.064575,-1.837156},{-0.126699,-1.887880},{-0.090568,-1.832799},{0.065338,-1.807480},{-0.197343,-1.705888},{-0.216561,-1.785949},{0.042567,-1.806371},{-0.065534,-1.757623},{0.086380,-1.904010},{-0.097326,-1.969296},{-0.213034,-1.850288},{-0.017790,-1.730867},{-0.045577,-1.783686},{-0.053309,-1.886260},{0.055072,-1.793076},{-0.091874,-1.921906},{-0.033719,-1.796160},{0.266464,-1.993952},{0.079090,-1.921165} },
M249 { {0, -1.49}, {0.39375, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900} },
HMLMG { {0, -1.4}, {-0.39, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4} },
MP5 { {0.125361,-1.052446},{-0.099548,-0.931548},{0.027825,-0.954094},{-0.013715,-0.851504},{-0.007947,-1.070579},{0.096096,-1.018017},{-0.045937,-0.794216},{0.034316,-1.112618},{-0.003968,-0.930040},{-0.009403,-0.888503},{0.140813,-0.970807},{-0.015052,-1.046551},{0.095699,-0.860475},{-0.269643,-1.038896},{0.000285,-0.840478},{0.018413,-1.038126},{0.099191,-0.851701},{0.199659,-0.893041},{-0.082660,-1.069278},{0.006826,-0.881493},{0.091709,-1.150956},{-0.108677,-0.965513},{0.169612,-1.099499},{-0.038244,-1.120084},{-0.085513,-0.876956},{0.136279,-1.047589},{0.196392,-1.039977},{-0.152513,-1.209291},{-0.214510,-0.956648},{0.034276,-0.095177} },
Thompson { {-0.114413,-0.680635},{0.008686,-0.676598},{0.010312,-0.682837},{0.064825,-0.691345},{0.104075,-0.655618},{-0.088118,-0.660429},{0.089906,-0.675183},{0.037071,-0.632623},{0.178465,-0.634737},{0.034654,-0.669443},{-0.082658,-0.664826},{0.025550,-0.636631},{0.082414,-0.647118},{-0.123305,-0.662104},{0.028164,-0.662354},{-0.117346,-0.693475},{-0.268777,-0.661123},{-0.053086,-0.677493},{0.04238,-0.647038}, {0.04238,-0.647038} },
Custom { {-0.114414,-0.680635},{0.008685,-0.676597},{0.010312,-0.682837},{0.064825,-0.691344},{0.104075,-0.655617},{-0.088118,-0.660429},{0.089906,-0.675183},{0.037071,-0.632623},{0.178466,-0.634737},{0.034653,-0.669444},{-0.082658,-0.664827},{0.025551,-0.636631},{0.082413,-0.647118},{-0.123305,-0.662104},{0.028164,-0.662354},{-0.117345,-0.693474},{-0.268777,-0.661122},{-0.053086,-0.677493},{0.004238,-0.647037},{0.014169,-0.551440},{-0.009907,-0.552079},{0.044076,-0.577694},{-0.043187,-0.549581} },
Semi { {0, -1.4} },
Python { {0, -5.8} }*/

//None 		0.0,
//AK-47 		133.33,
//LR-300 	120.0,
//M249 		100.0,
//HMLMG 		100.0,
//MP5 		89.0,
//Thompson 	113.0,
//Custom 	90.0,
//Python 	125.0,
//Semi 	175.0


std::vector<Vector1> Position_AK = { {0.000000,-2.257792},{0.323242,-2.300758},{0.649593,-2.299759},{0.848786,-2.259034},{1.075408,-2.323947},{1.268491,-2.215956},{1.330963,-2.236556},{1.336833,-2.218203},{1.505516,-2.143454},{1.504423,-2.233091},{1.442116,-2.270194},{1.478543,-2.204318},{1.392874,-2.165817},{1.480824,-2.177887},{1.597069,-2.270915},{1.449996,-2.145893},{1.369179,-2.270450},{1.582363,-2.298334},{1.516872,-2.235066},{1.498249,-2.238401},{1.465769,-2.331642},{1.564812,-2.242621},{1.517519,-2.303052},{1.422433,-2.211946},{1.553195,-2.248043},{1.510463,-2.285327},{1.553878,-2.240047},{1.520380,-2.221839},{1.553878,-2.240047},{1.553195,-2.248043} };
std::vector<Vector1> Position_LR = { {0.000000,-2.052616},{0.055584,-1.897695},{-0.247226,-1.863222},{-0.243871,-1.940010},{0.095727,-1.966751},{0.107707,-1.885520},{0.324888,-1.946722},{-0.181137,-1.880342},{0.162399,-1.820107},{-0.292076,-1.994940},{0.064575,-1.837156},{-0.126699,-1.887880},{-0.090568,-1.832799},{0.065338,-1.807480},{-0.197343,-1.705888},{-0.216561,-1.785949},{0.042567,-1.806371},{-0.065534,-1.757623},{0.086380,-1.904010},{-0.097326,-1.969296},{-0.213034,-1.850288},{-0.017790,-1.730867},{-0.045577,-1.783686},{-0.053309,-1.886260},{0.055072,-1.793076},{-0.091874,-1.921906},{-0.033719,-1.796160},{0.266464,-1.993952},{0.079090,-1.921165} };
std::vector<Vector1> Position_MP5 = { {0.125361,-1.052446},{-0.099548,-0.931548},{0.027825,-0.954094},{-0.013715,-0.851504},{-0.007947,-1.070579},{0.096096,-1.018017},{-0.045937,-0.794216},{0.034316,-1.112618},{-0.003968,-0.930040},{-0.009403,-0.888503},{0.140813,-0.970807},{-0.015052,-1.046551},{0.095699,-0.860475},{-0.269643,-1.038896},{0.000285,-0.840478},{0.018413,-1.038126},{0.099191,-0.851701},{0.199659,-0.893041},{-0.082660,-1.069278},{0.006826,-0.881493},{0.091709,-1.150956},{-0.108677,-0.965513},{0.169612,-1.099499},{-0.038244,-1.120084},{-0.085513,-0.876956},{0.136279,-1.047589},{0.196392,-1.039977},{-0.152513,-1.209291},{-0.214510,-0.956648},{0.034276,-0.095177} };
std::vector<Vector1> Position_SMG = { {-0.114414,-0.680635},{0.008685,-0.676597},{0.010312,-0.682837},{0.064825,-0.691344},{0.104075,-0.655617},{-0.088118,-0.660429},{0.089906,-0.675183},{0.037071,-0.632623},{0.178466,-0.634737},{0.034653,-0.669444},{-0.082658,-0.664827},{0.025551,-0.636631},{0.082413,-0.647118},{-0.123305,-0.662104},{0.028164,-0.662354},{-0.117345,-0.693474},{-0.268777,-0.661122},{-0.053086,-0.677493},{0.004238,-0.647037},{0.014169,-0.551440},{-0.009907,-0.552079},{0.044076,-0.577694},{-0.043187,-0.549581} };
std::vector<Vector1> Position_THOMP = { {-0.114413,-0.680635},{0.008686,-0.676598},{0.010312,-0.682837},{0.064825,-0.691345},{0.104075,-0.655618},{-0.088118,-0.660429},{0.089906,-0.675183},{0.037071,-0.632623},{0.178465,-0.634737},{0.034654,-0.669443},{-0.082658,-0.664826},{0.025550,-0.636631},{0.082414,-0.647118},{-0.123305,-0.662104},{0.028164,-0.662354},{-0.117346,-0.693475},{-0.268777,-0.661123},{-0.053086,-0.677493},{0.04238,-0.647038}, {0.04238,-0.647038} };
std::vector<Vector1> Position_M249 = { {0, -1.49}, {0.39375, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.720, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900}, {0.0, -1.4900} };
std::vector<Vector1> Position_HMLMG = { {0, -1.4}, {-0.39, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4}, {-0.73, -1.4} };
std::vector<Vector1> Position_PYTHON = { {0, -5.8} };
std::vector<Vector1> Position_SEMI = { {0, -1.4} };

std::vector<double> MTimeAK = { 121.96149709966872,92.6333814724611,138.60598637206294,113.37874368443146,66.25151186427745,66.29530438019354,75.9327831420658,85.05526144256157,
89.20256669256554,86.68010184667988,78.82145888317788,70.0451048111144,60.85979604582978,59.51642457624619,71.66762996283607,86.74060009403034,98.3363599080854,104.34161954944257,
104.09299204005345,97.58780746901739,85.48062700875559,70.4889202349561,56.56417811530545,47.386907899993936,56.63787408680247,91.5937793023631,112.38667610336424,111.39338971888095,
87.5067801164596 };

namespace WeaponBase {
	struct {
		const double WaitTime = 133.3333;
	}WTAK;
	struct {
		const int WaitTime = 120.0; // "C:/Program Files (x86)/Steam/steamapps/common/Rust/Bundles/shared/content.bundle"
	}WTLR;
	struct {
		const int WaitTime = 89.0;
	}WTMP5;
	struct {
		const int WaitTime = 90.0;
	}WTSMG;
	struct {
		const int WaitTime = 113.0;
	}WTTHOMP;
	struct {
		const int WaitTime = 100.0;
	}WTM249;
	struct {
		const int WaitTime = 100.0;
	}WTHMLMG;
	struct {
		const int WaitTime = 175.0;
	}WTSAMI;
	struct {
		const int WaitTime = 125.0;
	}WTPYTHON;
}
namespace ModData {
	struct {
		double Scope8X = 6.05;
		double Scope16X = 7.68;
		double ScopeHOLO = 1.1;
		double ScopeHAND = 0.8;
		double ScopeNONE = 1.0;
	}Scope;
	struct {
		double BarrelSILEN = 0.8;
		double Suppressor = 0.8;
		double BarrelNONE = 1.0;
	}Barrel;
}

bool WPAK, WPLR, WPMP5, WPSMG, WPTHOMP, WPM249, WPHMLMG, WPSEMI, WPPYTHON, Mod8X, Mod16X, ModHOLO, ModHAND, ModSILEN, ModSound, bMuzzleBoost, Suppressor, ModSimple;
float Sensitivity = 1; int FOV = 90;
std::string wptext = ("-"), scptext = "-", brltext = "-";

static const char* hide[]{ "None", "Insert", "Home", "Delete", "End", "Page Up", "Page Down", "F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "F10", "F11", "F12", "Up Arrow", "Down Arrow", "Right Arrow", "Left Arrow" };
static int selectedHide = 0;
void gethide()
{
	LONG   lResult;
	HKEY   hKey;
	LPBYTE folder = new BYTE[MAX_PATH];
	DWORD  dwSize = sizeof(folder);
	char   value[64];
	DWORD  value_length = 64;
	DWORD  dwType = REG_SZ;

	lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
		TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
			"Uninstall\\Steam App 252490"),
		&hKey);

	RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
		(LPBYTE)&value, &value_length);

	RegCloseKey(hKey);

	std::ifstream file;
	std::string line;
	int fileLine = 0;

	std::string client(skCrypt("\\cfg\\selectedhide.cfg"));

	file.open(std::string(value) + client); // path to rust

	while (std::getline(file, line))
	{
		fileLine++;
		if (line.find("selected.hide") != std::string::npos) { // makes sure we read the correct line of the .cfg file
			std::string fovString = line;
			size_t pos = fovString.find(" ");
			fovString = fovString.substr(pos + 2);
			std::stringstream fovConv(fovString);

			fovConv >> selectedHide;
		}
	}
}

bool hideonads = false;
int birinci = 0;
int ikinci = 0;
int ucuncu = 255;
bool loader_active = true;
HWND main_hwnd = nullptr;


void key_input(int key) {
	WORD keyCode;

	switch (key) {
	case 0:
		keyCode = 0x30;
		break;
	case 1:
		keyCode = 0x31;
		break;
	case 2:
		keyCode = 0x32;
		break;
	case 3:
		keyCode = 0x33;
		break;
	case 4:
		keyCode = 0x34;
		break;
	case 5:
		keyCode = 0x35;
		break;
	case 6:
		keyCode = 0x36;
		break;
	case 7:
		keyCode = 0x37;
		break;
	case 8:
		keyCode = 0x38;
		break;
	case 9:
		keyCode = 0x39;
		break;
	}

	keybd_event(keyCode, 0, KEYEVENTF_EXTENDEDKEY, 0);
	keybd_event(keyCode, 0, KEYEVENTF_KEYUP, 0);
}

void SleepTime(int wt)
{
	LONGLONG atime;
	LONGLONG itime;
	LONGLONG mtime;
	QueryPerformanceFrequency((LARGE_INTEGER*)&atime);
	atime /= 1000;
	QueryPerformanceCounter((LARGE_INTEGER*)&mtime);
	itime = mtime / atime + wt;
	mtime = 0;
	while (mtime < itime)
	{
		QueryPerformanceCounter((LARGE_INTEGER*)&mtime);
		mtime /= atime;
	}
}
void SlowRec(double wt, double ct, int x1, int y1) {
	int x_ = 0, y_ = 0, t_ = 0;
	for (int i = 1; i <= (int)ct; ++i) {
		int xI = i * x1 / (int)ct;
		int yI = i * y1 / (int)ct;
		int tI = i * (int)ct / (int)ct;
		mouse_event(1, (int)xI - (int)x_, (int)yI - (int)y_, 0, 0);
		SleepTime((int)tI - (int)t_);
		x_ = xI; y_ = yI; t_ = tI;
	}
	SleepTime((int)wt - (int)ct);
}
int checkboost(float Delay) {
	return (int)Delay;
}
double BarrelData() {
	if (ModSILEN == true) {
		if (WPSMG == true)
			ModData::Barrel.BarrelSILEN = 0.85;
		if (ModHAND == true || ModHOLO == true)
			return 0.75;
		if (Mod8X == true && ModSILEN == true)
			return 1.46;
		else
			return ModData::Barrel.BarrelSILEN;
	}
	else
		return ModData::Barrel.BarrelNONE;
}
double ScopeData() {
	if (Mod8X == true) {
		// WPAK == true || WPLR == true || WPMP5 == true || WPSMG == true || WPTHOMP == true || WPM249 == true || WPHMLMG == true || WPSEMI == true || WPPYTHON == true ||
		if (WPAK == true || WPLR == true || WPMP5 == true || WPSMG == true || WPTHOMP == true || WPM249 == true || WPHMLMG == true || WPSEMI == true || WPPYTHON == true) {
			if (Mod8X == true)
				return ModData::Scope.Scope8X + 0.75;
		}
		return ModData::Scope.Scope8X;
	}
	else if (Mod16X == true) {
		if (WPAK == true || WPLR == true || WPMP5 == true || WPSMG == true || WPTHOMP == true || WPM249 == true || WPHMLMG == true || WPSEMI == true || WPPYTHON == true) {
			if (Mod16X == true)
				return ModData::Scope.Scope16X + 0.1;
		}
		return ModData::Scope.Scope16X;
	}
	else if (ModHAND == true) {
		if (WPAK == true || WPLR == true || WPMP5 == true || WPSMG == true || WPTHOMP == true || WPM249 == true || WPHMLMG == true || WPSEMI == true || WPPYTHON == true) {
			if (ModHAND == true)
				return ModData::Scope.ScopeHAND + 0.1;
		}
		return ModData::Scope.ScopeHAND;
	}
	else if (ModHOLO == true) {
		if (WPAK == true || WPLR == true || WPMP5 == true || WPSMG == true || WPTHOMP == true || WPM249 == true || WPHMLMG == true || WPSEMI == true || WPPYTHON == true) {
			if (ModHOLO == true)
				return ModData::Scope.ScopeHOLO + 0.3;
		}
		return ModData::Scope.ScopeHOLO;
	}
	else
		return ModData::Scope.ScopeNONE;
}
namespace NowWP {
	double x(int mermi) {
		if (GetAsyncKeyState(VK_CONTROL)) {
			if (WPAK == true)
				return (((Position_AK[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPLR == true)
				return (((Position_LR[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPMP5 == true)
				return (((Position_MP5[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPTHOMP == true)
				return (((Position_THOMP[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPSMG == true)
				return (((Position_SMG[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));

			else if (WPM249 == true)
				return (((Position_M249[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPHMLMG == true)
				return (((Position_HMLMG[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPSEMI == true)
				return (((Position_SEMI[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPPYTHON == true)
				return (((Position_PYTHON[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));

			else
				return 0;
		}
		else
		{
			if (WPAK == true)
				return (((Position_AK[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPLR == true)
				return (((Position_LR[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPMP5 == true)
				return (((Position_MP5[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPTHOMP == true)
				return (((Position_THOMP[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPSMG == true)
				return (((Position_SMG[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));

			else if (WPM249 == true)
				return (((Position_M249[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPHMLMG == true)
				return (((Position_HMLMG[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPSEMI == true)
				return (((Position_SEMI[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPPYTHON == true)
				return (((Position_PYTHON[mermi].x * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));

			else
				return 0;
		}
	}
	double y(int mermi) {
		if (GetAsyncKeyState(VK_CONTROL)) {
			if (WPAK == true)
				return (((Position_AK[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPLR == true)
				return (((Position_LR[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPMP5 == true)
				return (((Position_MP5[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPTHOMP == true)
				return (((Position_THOMP[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPSMG == true)
				return (((Position_SMG[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));

			else if (WPM249 == true)
				return (((Position_M249[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPHMLMG == true)
				return (((Position_HMLMG[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPSEMI == true)
				return (((Position_SEMI[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPPYTHON == true)
				return (((Position_PYTHON[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity * 2) * 3.0 * ((FOV * 2) / 100.0))));

			else
				return 0;
		}
		else
		{
			if (WPAK == true)
				return (((Position_AK[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPLR == true)
				return (((Position_LR[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPMP5 == true)
				return (((Position_MP5[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPTHOMP == true)
				return (((Position_THOMP[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPSMG == true)
				return (((Position_SMG[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));

			else if (WPM249 == true)
				return (((Position_M249[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPHMLMG == true)
				return (((Position_HMLMG[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPSEMI == true)
				return (((Position_SEMI[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));
			else if (WPPYTHON == true)
				return (((Position_PYTHON[mermi].y * ScopeData()) * BarrelData() / (-0.03 * (Sensitivity) * 3.0 * ((FOV * 2) / 100.0))));

			else
				return 0;
		}
	}
	double Delaying() {
		if (WPAK == true)
			return WeaponBase::WTAK.WaitTime;
		else if (WPLR == true)
			return WeaponBase::WTLR.WaitTime;
		else if (WPMP5 == true)
			return WeaponBase::WTMP5.WaitTime;
		else if (WPTHOMP == true)
			return WeaponBase::WTTHOMP.WaitTime;
		else if (WPSMG == true)
			return WeaponBase::WTSMG.WaitTime;

		else if (WPM249 == true)
			return WeaponBase::WTM249.WaitTime;
		else if (WPHMLMG == true)
			return WeaponBase::WTHMLMG.WaitTime;
		else if (WPSEMI == true)
			return WeaponBase::WTSAMI.WaitTime;
		else if (WPPYTHON == true)
			return WeaponBase::WTPYTHON.WaitTime;

		else
			return 0;
	}
	double DelayingMulti(int mermi) {
		if (WPAK == true)
			return MTimeAK[mermi];
		else if (WPLR == true)
			return WeaponBase::WTLR.WaitTime;
		else if (WPMP5 == true)
			return WeaponBase::WTMP5.WaitTime;
		else if (WPTHOMP == true)
			return WeaponBase::WTTHOMP.WaitTime;
		else if (WPSMG == true)
			return WeaponBase::WTSMG.WaitTime;

		else if (WPM249 == true)
			return WeaponBase::WTM249.WaitTime;
		else if (WPHMLMG == true)
			return WeaponBase::WTHMLMG.WaitTime;
		else if (WPSEMI == true)
			return WeaponBase::WTSAMI.WaitTime;
		else if (WPPYTHON == true)
			return WeaponBase::WTPYTHON.WaitTime;

		else
			return 0;
	}
	int BulletCheck() {
		if (WPAK == true)
			return Position_AK.size() - 1;
		else if (WPLR == true)
			return Position_LR.size() - 1;
		else if (WPMP5 == true)
			return Position_MP5.size() - 1;
		else if (WPTHOMP == true)
			return Position_THOMP.size() - 1;
		else if (WPSMG == true)
			return Position_SMG.size() - 1;

		else if (WPM249 == true)
			return Position_M249.size() - 1;
		else if (WPHMLMG == true)
			return Position_HMLMG.size() - 1;
		else if (WPSEMI == true)
			return Position_PYTHON.size() - 1;
		else if (WPPYTHON == true)
			return Position_SEMI.size() - 1;

		else
			return 0;
	}
	bool WPCheck() {
		if (WPAK == true || WPLR == true || WPMP5 == true || WPTHOMP == true || WPSMG == true || WPM249 == true || WPHMLMG == true || WPSEMI == true || WPPYTHON == true)
			return true;
		else
			return false;
	}
	void RecoilBreak(int count) {
		if (WPSEMI == true) {
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		else if (WPM249 == true) {
		}
		else if (WPSEMI != true || WPM249 != true) {
			if (count == NowWP::BulletCheck()) {
				if (ModSound == true) {
					Beep(1200, 90);
					Beep(1500, 90);
				}
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}
		}
	}
};

bool MainFunc() {
	for (;;) {
		if (NowWP::WPCheck() == true)
		{
			for (int i = 2; i <= NowWP::BulletCheck() && GetAsyncKeyState(VK_LBUTTON) & 0x8000 && GetAsyncKeyState(VK_RBUTTON) & 0x8000; i++)
			{
				SlowRec((int)checkboost((float)NowWP::Delaying()), (int)checkboost(NowWP::DelayingMulti(i)), (int)NowWP::x(i), (int)NowWP::y(i));
			}
			Sleep(1);
		}
		Sleep(1);
	}
	return false;
}

void pQuerySleep(int ms)
{
	LONGLONG timerResolution;
	LONGLONG wantedTime;
	LONGLONG currentTime;

	QueryPerformanceFrequency((LARGE_INTEGER*)&timerResolution);
	timerResolution /= 1000;

	QueryPerformanceCounter((LARGE_INTEGER*)&currentTime);
	wantedTime = currentTime / timerResolution + ms;
	currentTime = 0;
	while (currentTime < wantedTime)
	{
		QueryPerformanceCounter((LARGE_INTEGER*)&currentTime);
		currentTime /= timerResolution;
	}
}

void Smoothing(double delay, double control_time, int x, int y) {
	int x_ = 0, y_ = 0, t_ = 0;
	for (int i = 1; i <= (int)control_time; ++i) {
		int xI = i * x / (int)control_time;
		int yI = i * y / (int)control_time;
		int tI = i * (int)control_time / (int)control_time;
		mouse_event(1, (int)xI - (int)x_, (int)yI - (int)y_, 0, 0);
		pQuerySleep((int)tI - (int)t_);
		x_ = xI; y_ = yI; t_ = tI;
	}
	pQuerySleep((int)delay - (int)control_time);
}

int IsMuzzleBoost(float Delay) {
	if (bMuzzleBoost == true) {
		float difference = Delay * 0.1f;
		Delay = Delay - difference;
		return (int)Delay + 2;
	}
	else
		return (int)Delay;
}

double BarrelAttachment() {
	if (Suppressor == true) {
		if (WPM249 == true)
			ModData::Barrel.Suppressor = 0.75;
		if (WPSMG == true)
			ModData::Barrel.Suppressor = 0.85;
		if (ModSimple == true || ModHOLO == true)
			return 0.75;
		if (Mod8X == true && Suppressor == true)
			return 1.46;
		else
			return ModData::Barrel.Suppressor;
	}
	else if (bMuzzleBoost == true) {
		return ModData::Barrel.BarrelNONE;
	}
	else
		return ModData::Barrel.BarrelNONE;
}

void script()
{
	// WPAK = false, WPLR = false, WPMP5 = false, WPSMG = false, WPTHOMP = false, WPM249 = false, WPHMLMG = false, WPSEMI = false, WPPYTHON = false;
	if (GetAsyncKeyState(key)) {
		WPAK = !WPAK;
		if (WPAK == true) {
			WPLR = false, WPMP5 = false, WPSMG = false, WPTHOMP = false, WPM249 = false, WPHMLMG = false, WPSEMI = false, WPPYTHON = false;
		}
		else if (WPAK == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(key2)) {
		WPLR = !WPLR;
		if (WPLR == true) {
			WPAK = false, WPMP5 = false, WPSMG = false, WPTHOMP = false, WPM249 = false, WPHMLMG = false, WPSEMI = false, WPPYTHON = false;
		}
		else if (WPLR == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(key3)) {
		WPMP5 = !WPMP5;
		if (WPMP5 == true) {
			WPAK = false, WPLR = false, WPSMG = false, WPTHOMP = false, WPM249 = false, WPHMLMG = false, WPSEMI = false, WPPYTHON = false;
		}
		else if (WPMP5 == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(key4)) {
		WPSMG = !WPSMG;
		if (WPSMG == true) {
			WPAK = false, WPLR = false, WPMP5 = false, WPTHOMP = false, WPM249 = false, WPHMLMG = false, WPSEMI = false, WPPYTHON = false;
		}
		else if (WPSMG == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(key5)) {
		WPTHOMP = !WPTHOMP;
		if (WPTHOMP == true) {
			WPAK = false, WPLR = false, WPMP5 = false, WPSMG = false, WPM249 = false, WPHMLMG = false, WPSEMI = false, WPPYTHON = false;
		}
		else if (WPTHOMP == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(key6)) {
		WPSEMI = !WPSEMI;
		if (WPSEMI == true) {
			WPAK = false, WPLR = false, WPMP5 = false, WPSMG = false, WPTHOMP = false, WPM249 = false, WPHMLMG = false, WPPYTHON = false;
		}
		else if (WPSEMI == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(key7)) {
		WPM249 = !WPM249;
		if (WPM249 == true) {
			WPAK = false, WPLR = false, WPMP5 = false, WPSMG = false, WPTHOMP = false, WPHMLMG = false, WPSEMI = false, WPPYTHON = false;
		}
		else if (WPM249 == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(key8)) {
		WPHMLMG = !WPHMLMG;
		if (WPHMLMG == true) {
			WPAK = false, WPLR = false, WPMP5 = false, WPSMG = false, WPTHOMP = false, WPM249 = false, WPSEMI = false, WPPYTHON = false;
		}
		else if (WPHMLMG == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(key9)) {
		WPPYTHON = !WPPYTHON;
		if (WPPYTHON == true) {
			WPAK = false, WPLR = false, WPMP5 = false, WPSMG = false, WPTHOMP = false, WPM249 = false, WPHMLMG = false, WPSEMI = false, WPPYTHON = false;
		}
		else if (WPPYTHON == false) {
			Mod8X = false, Mod16X = false, ModHOLO = false, ModHAND = false, ModSILEN = false;
		}
		Beep(300, 150);
	}

	if (GetAsyncKeyState(x8)) {
		Mod8X = !Mod8X;
		switch (Mod8X) {
		case(true):
			ModHOLO = false; ModSimple = false; Mod16X = false;
			break;
		case(false):
			break;
		}
		Beep(300, 150);
	}
	if (GetAsyncKeyState(x16)) {
		Mod16X = !Mod16X;
		switch (Mod16X) {
		case(true):
			ModHOLO = false; ModSimple = false; Mod8X = false;
			break;
		case(false):
			break;
		}
		Beep(300, 150);
	}
	if (GetAsyncKeyState(key27)) {
		ModSimple = !ModSimple;
		if (ModSimple == true) {
			Mod8X = false; ModHOLO = false; ModHAND = false; Mod16X = false;
		}
		else if (ModSimple == false)
			Beep(300, 150);
	}
	if (GetAsyncKeyState(holo)) {
		ModHOLO = !ModHOLO;
		if (ModHOLO == true) {
			Mod8X = false; ModSimple = false; ModHAND = false; Mod16X = false;
		}
		else if (ModHOLO == false)
			Beep(300, 150);
	}
	/*if (GetAsyncKeyState(VK_NUMPAD8)) {
		Suppressor = !Suppressor;
		if (Suppressor == true) {
			bMuzzleBoost = false;
		}
		else if (Suppressor == false)
		Beep(300, 150);
	}*/
	if (GetAsyncKeyState(VK_F6)) {
		bMuzzleBoost = !bMuzzleBoost;
		if (bMuzzleBoost == true) {
			Suppressor = false;
		}
		else if (bMuzzleBoost == false)
			Beep(300, 150);
	}
	if (GetAsyncKeyState(VK_F12)) {
		keybd_event(VK_F1, 0, 0, 0);

	}
	if (GetAsyncKeyState(modreset)) {
		ModSILEN = false; ModHOLO = false; ModHAND = false; Mod8X = false; brltext = ("-"); scptext = ("-");

	}
	if (GetAsyncKeyState(reset)) {
		ModSILEN = false; ModHOLO = false; ModHAND = false; Mod8X = false; brltext = ("-"); scptext = ("-"); wptext = ("-");
		WPLR = false; WPMP5 = false; WPTHOMP = false;   WPAK = false; WPSMG = false; WPM249 = false; WPHMLMG = false; WPSEMI = false; WPPYTHON = false;

	}
	if (NowWP::WPCheck() == true)
	{
		for (int i = 0; i <= NowWP::BulletCheck() && GetAsyncKeyState(VK_LBUTTON) & 0x8000 && GetAsyncKeyState(VK_RBUTTON) & 0x8000; i++)
		{
			Smoothing((int)IsMuzzleBoost((float)NowWP::Delaying()), (int)IsMuzzleBoost(NowWP::DelayingMulti(i)), (int)NowWP::x(i), (int)NowWP::y(i));
			NowWP::RecoilBreak(i);
		}
	}
}
// Data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D11RenderTargetView*  g_mainRenderTargetView = NULL;

//fonts
ImFont* mainfont;
ImFont* smallfont;
ImFont* iconfont;
ImFont* logofont;

// menu tabs

enum tabs {
    rageaim,
    legitaim,
    antiaim,
    view,
    world,
    players,
    scripts,
    configs,
    settings
};

enum subtabs {
    globals, 
    external,
    internal,
    settings2,
	settingconfig
};

tabs tabmenu = rageaim;
subtabs subtabmenu = globals;

// Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);


static bool particles = true;

void Particles()
{
    if (!particles)
        return;

    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 partile_pos[100];
    static ImVec2 partile_target_pos[100];
    static float partile_speed[100];
    static float partile_radius[100];


    for (int i = 1; i < 50; i++)
    {
        if (partile_pos[i].x == 0 || partile_pos[i].y == 0)
        {
            partile_pos[i].x = rand() % (int)screen_size.x + 1;
            partile_pos[i].y = 15.f;
            partile_speed[i] = 1 + rand() % 25;
            partile_radius[i] = rand() % 4;

            partile_target_pos[i].x = rand() % (int)screen_size.x;
            partile_target_pos[i].y = screen_size.y * 2;
        }

        partile_pos[i] = ImLerp(partile_pos[i], partile_target_pos[i], ImGui::GetIO().DeltaTime * (partile_speed[i] / 60));

        if (partile_pos[i].y > screen_size.y)
        {
            partile_pos[i].x = 0;
            partile_pos[i].y = 0;
        }

        ImGui::GetWindowDrawList()->AddCircleFilled(partile_pos[i], partile_radius[i], ImColor(174, 139, 148, 255 / 2));
    }

}

static const char* weapons[] = { "AK", "LR", "MP5", "SMG", "THOMP", "M249", "HMLMG", "SEMI", "PYTHON" };
static bool selected[9] = {}; // Array of bools to keep track of selection states

void ShowWeaponSelector() {
	for (int i = 0; i < sizeof(weapons) / sizeof(weapons[0]); ++i) {
		if (ImGui::Checkbox(weapons[i], &selected[i])) {
			// Unselect all other weapons
			for (int j = 0; j < sizeof(weapons) / sizeof(weapons[0]); ++j) {
				if (j != i) {
					selected[j] = false;
				}
			}
		}
		// Optional: display in a single line
		if (i < sizeof(weapons) / sizeof(weapons[0]) - 1) ImGui::SameLine();
	}
	// Display selected weapon
	for (int i = 0; i < sizeof(weapons) / sizeof(weapons[0]); ++i) {
		if (selected[i]) {
			ImGui::Text("Selected Weapon: %s", weapons[i]);
			break;
		}
	}
}



bool resetMods = false;  // ตัวแปรสำหรับรีเซ็ตโมดูล
bool resetAll = false;   // ตัวแปรสำหรับรีเซ็ตทุกอย่าง

int WIDTH = 650;
int HEIGHT = 450;

HWND hwnd;
RECT rc;
POINT mouse;

void DrawCrosshair(ImGuiIO& io) {
	ImVec2 window_pos = ImVec2(io.DisplaySize.x * 0.5f, io.DisplaySize.y * 0.5f);
	ImVec2 window_pos_pivot = ImVec2(0.5f, 0.5f);
	ImGui::SetNextWindowPos(window_pos, ImGuiCond_Always, window_pos_pivot);

	ImGui::SetNextWindowBgAlpha(0.0f); // Transparent background
	ImGui::Begin("Crosshair", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoBackground);

	float line_length = 15.0f; // Length of the crosshair lines
	float line_thickness = 2.0f; // Thickness of the lines
	ImU32 col = IM_COL32(255, 0, 0, 255); // Red color

	ImVec2 center = ImGui::GetWindowSize() * 0.5f;
	ImVec2 min = center - ImVec2(line_length / 2.0f, 0.0f);
	ImVec2 max = center + ImVec2(line_length / 2.0f, 0.0f);

	ImGui::GetWindowDrawList()->AddLine(min, max, col, line_thickness);
	min = center - ImVec2(0.0f, line_length / 2.0f);
	max = center + ImVec2(0.0f, line_length / 2.0f);
	ImGui::GetWindowDrawList()->AddLine(min, max, col, line_thickness);

	ImGui::End();
}

static COLORREF FLOAT4TOD3DCOLOR(const float Col[3])
{
	float r = Col[0];
	float g = Col[1];
	float b = Col[2];

	// Accept both 0..1 and 0..255 inputs.
	if (r > 1.0f || g > 1.0f || b > 1.0f)
	{
		r /= 255.0f;
		g /= 255.0f;
		b /= 255.0f;
	}

	auto to_byte = [](float v) -> BYTE {
		v = std::clamp(v, 0.0f, 1.0f);
		return static_cast<BYTE>(v * 255.0f + 0.5f);
	};

	return RGB(to_byte(r), to_byte(g), to_byte(b));
}
HDC ragedc = NULL;
static int crosshairsize = 8;
static int cx = 0;
static int cy = 0;
namespace Color
{
	float CrosshairColors[3] = { 255.f, 55.f, 55.f };
}
static bool legitmode1, hidescript1, hideshow31, crosshai = false;
int crosshairthread_2() {
	::SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE);
	ragedc = GetDC(HWND_DESKTOP);
	while (1)
	{
		if (crosshai == true)
		{
			for (int i = 0; i < crosshairsize; i++)
			{
				if (hideonads == true)
				{
					if (!GetAsyncKeyState(VK_RBUTTON))
					{
						{
							{
								SetPixel(ragedc, cx + i, cy + ((crosshairsize - 0) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
								SetPixel(ragedc, cx + i, cy + ((crosshairsize - 2) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
								SetPixel(ragedc, cx + ((crosshairsize - 0) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
								SetPixel(ragedc, cx + ((crosshairsize - 2) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
							}
							cx = GetSystemMetrics(SM_CXSCREEN) / 2 - ((crosshairsize - 1) / 2);
							cy = GetSystemMetrics(SM_CYSCREEN) / 2 - ((crosshairsize - 1) / 2);
						}
					}
				}
				if (hideonads == false)
				{
					{
						{
							{
								SetPixel(ragedc, cx + i, cy + ((crosshairsize - 0) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
								SetPixel(ragedc, cx + i, cy + ((crosshairsize - 2) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
								SetPixel(ragedc, cx + ((crosshairsize - 0) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
								SetPixel(ragedc, cx + ((crosshairsize - 2) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
							}
							cx = GetSystemMetrics(SM_CXSCREEN) / 2 - ((crosshairsize - 1) / 2);
							cy = GetSystemMetrics(SM_CYSCREEN) / 2 - ((crosshairsize - 1) / 2);
						}
					}
				}
			}
			Sleep(1);
		}
		Sleep(1);
	}
	Sleep(1);
}


void SaveConfig() {
	std::ofstream configFile("config.ini");

	// บันทึก Sensitivity และ FOV ที่มีอยู่
	configFile << "Sensitivity=" << Sensitivity << std::endl;
	configFile << "FOV=" << FOV << std::endl;

	// บันทึกค่าปุ่ม
	configFile << "key=" << key << std::endl;
	configFile << "key2=" << key2 << std::endl;
	configFile << "key3=" << key3 << std::endl;
	configFile << "key4=" << key4 << std::endl;
	configFile << "key5=" << key5 << std::endl;
	configFile << "key6=" << key6 << std::endl;
	configFile << "key7=" << key7 << std::endl;
	configFile << "key8=" << key8 << std::endl;
	configFile << "key9=" << key9 << std::endl;
	configFile << "modreset=" << modreset << std::endl;
	configFile << "holo=" << holo << std::endl;
	configFile << "x8=" << x8 << std::endl;
	configFile << "x16=" << x16 << std::endl;
	configFile << "hand=" << hand << std::endl;
	configFile << "silen=" << silen << std::endl;
	configFile << "reset=" << reset << std::endl;

	configFile.close();
}


void LoadConfig() {
	std::ifstream configFile("config.ini");
	std::string line;

	while (std::getline(configFile, line)) {
		std::istringstream is_line(line);
		std::string settingKey;
		if (std::getline(is_line, settingKey, '=')) {
			std::string value;
			if (std::getline(is_line, value)) {
				if (settingKey == "Sensitivity") Sensitivity = std::stof(value);
				else if (settingKey == "FOV") FOV = std::stoi(value);
				// โหลดค่าปุ่ม
				else if (settingKey == "key") key = std::stoi(value);
				else if (settingKey == "key2") key2 = std::stoi(value);
				else if (settingKey == "key3") key3 = std::stoi(value);
				else if (settingKey == "key4") key4 = std::stoi(value);
				else if (settingKey == "key5") key5 = std::stoi(value);
				else if (settingKey == "key6") key6 = std::stoi(value);
				else if (settingKey == "key7") key7 = std::stoi(value);
				else if (settingKey == "key8") key8 = std::stoi(value);
				else if (settingKey == "key9") key9 = std::stoi(value);
				else if (settingKey == "modreset") modreset = std::stoi(value);
				else if (settingKey == "holo") holo = std::stoi(value);
				else if (settingKey == "x8") x8 = std::stoi(value);
				else if (settingKey == "x16") x16 = std::stoi(value);
				else if (settingKey == "hand") hand = std::stoi(value);
				else if (settingKey == "silen") silen = std::stoi(value);
				else if (settingKey == "reset") reset = std::stoi(value);
			}
		}
	}
	configFile.close();
}

bool showGui = true;  // Menu visível ao iniciar (antes: false causava tela preta)

// Function to toggle Gui visibility
void ToggleGui()
{
	showGui = !showGui;
}



int main(int, char**)
{

    WNDCLASSEXW wc;
    wc.cbSize = sizeof(WNDCLASSEXW);
    wc.style = CS_CLASSDC;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = NULL;
    wc.cbWndExtra = NULL;
    wc.hInstance = nullptr;
    wc.hIcon = LoadIcon(0, IDI_APPLICATION);
    wc.hCursor = LoadCursor(0, IDC_ARROW);
    wc.hbrBackground = nullptr;
    wc.lpszMenuName = L"POKEMON ";
    wc.lpszClassName = L"POKEMON ";
    wc.hIconSm = LoadIcon(0, IDI_APPLICATION);

    RegisterClassExW(&wc);
	HWND hwnd = CreateWindowExW(WS_EX_TOOLWINDOW, wc.lpszClassName, L"POKEMON ", WS_POPUPWINDOW, (GetSystemMetrics(SM_CXSCREEN) / 2) - (WIDTH / 2), (GetSystemMetrics(SM_CYSCREEN) / 2) - (HEIGHT / 2), WIDTH, HEIGHT, 0, 0, 0, 0);

    // Removido: SetLayeredWindowAttributes e DwmExtendFrameIntoClientArea
    // Essas chamadas causavam tela preta em vez de exibir o menu corretamente
    // SetWindowLongA(hwnd, GWL_EXSTYLE, GetWindowLong(hwnd, GWL_EXSTYLE) | WS_EX_LAYERED);
    // SetLayeredWindowAttributes(hwnd, RGB(0, 0, 0), 255, LWA_ALPHA);
    // MARGINS margins = { -1 };
    // DwmExtendFrameIntoClientArea(hwnd, &margins);

    POINT mouse;
    RECT rc = { 0 };
    GetWindowRect(hwnd, &rc);

    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
        return 1;
    }

    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);


    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    // Setup Platform/Renderer backends
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);



    ImFontConfig iconfontcfg;
    iconfontcfg.MergeMode = true;
    iconfontcfg.GlyphMaxAdvanceX = 13.0f;
    static const ImWchar icon_ranges[] = { 0xe900, 0xe909, 0 };
    //fonts
    mainfont = io.Fonts->AddFontFromMemoryTTF(lexend, sizeof(lexend), 16.0f);
    smallfont = io.Fonts->AddFontFromMemoryTTF(lexend, sizeof(lexend), 13.0f);
    iconfont = io.Fonts->AddFontFromMemoryTTF(iconfontmem, sizeof(iconfontmem), 17.0f, &iconfontcfg, icon_ranges);
    logofont = io.Fonts->AddFontFromMemoryTTF(lexendsb, sizeof(lexendsb), 31.0f);
    
    /*HRESULT usericonthread = D3DX11CreateTextureFromMemory(g_pd3dDevice, usericonmem, sizeof(usericonmem), nullptr, nullptr, &usericon, &usericonthread);*/
    // Our state
    bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.0f, 0.0f, 0.0f, 1.00f);
	static bool Sc = true;
    bool done = false;
    while (!done)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // See the WndProc() function below for our to dispatch events to the Win32 backend.
        MSG msg;
        while (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            if (msg.message == WM_QUIT)
                done = true;
        }
        if (done)
            break;

		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			ToggleGui();
			Sleep(200); // Add a small delay to avoid rapid toggling
		}
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

		if (showGui)
		{
			ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 15.0f);
			ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
			ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.f);
			ImGui::SetNextWindowSize(ImVec2(WIDTH, HEIGHT));
			ImGui::Begin("MainWindow", nullptr, ImGuiWindowFlags_NoDecoration); {

				auto draw = ImGui::GetWindowDrawList();
				const auto& p = ImGui::GetWindowPos();

				GetWindowRect(hwnd, &rc);

				if (ImGui::GetWindowPos().x != 0 || ImGui::GetWindowPos().y != 0)
				{
					MoveWindow(hwnd, rc.left + ImGui::GetWindowPos().x, rc.top + ImGui::GetWindowPos().y, WIDTH, HEIGHT, TRUE);
					ImGui::SetWindowPos(ImVec2(0.f, 0.f));
				}
				ImVec2 pos = ImGui::GetWindowPos();
				ImRect win(ImVec4(pos.x, pos.y, pos.x + WIDTH, pos.y + HEIGHT));
				const ImVec2& region = ImGui::GetContentRegionMax();

				// main frame
				draw->AddRectFilled(win.Min, win.Max, ImColor(20, 20, 20), 18.0f, NULL);
				draw->AddRectFilled(pos, pos + ImVec2(150, 450), ImColor(34, 34, 34), 15.0f, ImDrawFlags_RoundCornersLeft);
				Particles();
				draw->AddRect(win.Min, win.Max, ImColor(65, 65, 65), 15.0f, NULL, 1.4f);
				draw->AddLine(pos + ImVec2(150, 0), pos + ImVec2(150, 450), ImColor(65, 65, 65), 1.0f);

				draw->AddRectFilled(win.Min + ImVec2(160, 10), win.Min + ImVec2(520, 50), ImColor(30, 30, 30), 10.0f);
				draw->AddRect(win.Min + ImVec2(160, 10), win.Min + ImVec2(520, 50), ImColor(65, 65, 65), 10.0f);
				ImGui::SetCursorPos(ImVec2(0, 65));

				draw->AddRectFilled(win.Min + ImVec2(530, 10), win.Min + ImVec2(640, 50), ImColor(30, 30, 30), 10.0f);
				draw->AddRect(win.Min + ImVec2(530, 10), win.Min + ImVec2(640, 50), ImColor(65, 65, 65), 10.0f);

				draw->AddCircle(win.Min + ImVec2(550, 30), 16.0f, ImColor(65, 65, 65), 100);
				draw->AddCircleFilled(win.Min + ImVec2(550, 30), 16.0f, ImColor(15, 15, 15), 100);

				draw->AddText(win.Min + ImVec2(570, 15), ImColor(155, 155, 155), "RUST");
				ImGui::PushFont(smallfont);
				draw->AddText(win.Min + ImVec2(570, 30), ImColor(105, 105, 105), "C.Zip");
				ImGui::PopFont();

				ImGui::PushFont(logofont);
				draw->AddText(win.Min + ImVec2(20, 10), ImColor(250, 114, 185), "VENOM");
				draw->AddText(win.Min + ImVec2(20, 35), ImColor(250, 114, 185), "STORE");
				ImGui::PopFont();

				ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(5, 0));
				ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(5, 1));
				ImGui::BeginChild("tabmenu", ImVec2(150, 400));
				{
					custom::tabchild("Globals", ImVec2(150, 58)); {
						if (custom::tab("Sctipts", ImVec2(135, 30), NULL, (char*)u8"\ue902", tabmenu == scripts)) { tabmenu = scripts; }
					} ImGui::EndChild();
					custom::tabchild("Miscellaneous", ImVec2(150, 58)); {
						if (custom::tab("Configs", ImVec2(135, 30), NULL, (char*)u8"\ue901", tabmenu == configs)) { tabmenu = configs; }
					} ImGui::EndChild();
				} ImGui::EndChild();
				ImGui::PopStyleVar(2);

				ImGui::SetCursorPos(ImVec2(160, 10));
				ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(15, 5));
				ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(10, 50));
				ImGui::BeginChild("subtabmenu", ImVec2(420, 40)); {

					if (custom::subtab("EXTERNAL", ImVec2(75, 30), NULL, subtabmenu == globals)) { subtabmenu = globals; }
					if (custom::subtab("SETTING", ImVec2(75, 30), NULL, subtabmenu == settingconfig)) { subtabmenu = settingconfig; }

					ImGui::SetCursorPos(ImVec2(170, 10));
					ImGui::Text(wptext.c_str());
					ImGui::SameLine();
					ImGui::SetCursorPos(ImVec2(270, 10));
					ImGui::Text(scptext.c_str());
					ImGui::SameLine();
					ImGui::SetCursorPos(ImVec2(320, 10));
					ImGui::Text(brltext.c_str());
					ImGui::Separator();
					ImGui::Spacing();
					ImGui::Columns(2, nullptr, false);

				} ImGui::EndChild();
				ImGui::PopStyleVar(2);

				ImGui::SetCursorPos(ImVec2(160, 60));
				ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(5, 5));
				ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(15, 15));
				ImGui::BeginChild("Main", ImVec2(480, 387)); {

					switch (tabmenu) {

					case scripts: {

						switch (subtabmenu)
					case globals: {
							custom::MenuChild("Script Recoil", ImVec2(220, 300)); {
								if (Sc == true) {

									script();
								}
								ImGui::Keybind(" AK", &key, true);
								ImGui::Keybind(" LR", &key2, true);
								ImGui::Keybind(" MP5", &key3, true);
								ImGui::Keybind(" SMG", &key4, true);
								ImGui::Keybind(" M249", &key5, true);
								ImGui::Keybind(" HMLMG", &key6, true);
								ImGui::Keybind(" SEMI", &key7, true);
								ImGui::Keybind(" PYTHON", &key8, true);
								ImGui::Keybind(" THOMP", &key9, true);

							} ImGui::EndChild();
							custom::MenuChild("Gun Norecoil", ImVec2(220, 200)); {
								if (Sc) {
									script();
								}

								// สร้างช่องเช็คบ็อกซ์แทนปุ่ม
								ImGui::Checkbox("AK", &WPAK);
								if (WPAK) {
									WPLR = WPMP5 = WPSMG = WPTHOMP = WPM249 = WPHMLMG = WPSEMI = WPPYTHON = false;
									wptext = "Assault Rifle";
								}

								ImGui::Checkbox("LR", &WPLR);
								if (WPLR) {
									WPAK = WPMP5 = WPSMG = WPTHOMP = WPM249 = WPHMLMG = WPSEMI = WPPYTHON = false;
									wptext = "LR-300";
								}

								ImGui::Checkbox("MP5", &WPMP5);
								if (WPMP5) {
									WPAK = WPLR = WPSMG = WPTHOMP = WPM249 = WPHMLMG = WPSEMI = WPPYTHON = false;
									wptext = "MP5A4";
								}

								ImGui::Checkbox("SMG", &WPSMG);
								if (WPSMG) {
									WPAK = WPLR = WPMP5 = WPTHOMP = WPM249 = WPHMLMG = WPSEMI = WPPYTHON = false;
									wptext = "Custom SMG";
								}

								ImGui::Checkbox("THOMP", &WPTHOMP);
								if (WPTHOMP) {
									WPAK = WPLR = WPMP5 = WPSMG = WPM249 = WPHMLMG = WPSEMI = WPPYTHON = false;
									wptext = "Thompson";
								}

								ImGui::Checkbox("M249", &WPM249);
								if (WPM249) {
									WPAK = WPLR = WPMP5 = WPSMG = WPTHOMP = WPHMLMG = WPSEMI = WPPYTHON = false;
									wptext = "M249";
								}

								ImGui::Checkbox("HMLMG", &WPHMLMG);
								if (WPHMLMG) {
									WPAK = WPLR = WPMP5 = WPSMG = WPTHOMP = WPM249 = WPSEMI = WPPYTHON = false;
									wptext = "HMLMG";
								}

								ImGui::Checkbox("SEMI", &WPSEMI);
								if (WPSEMI) {
									WPAK = WPLR = WPMP5 = WPSMG = WPTHOMP = WPM249 = WPHMLMG = WPPYTHON = false;
									wptext = "Semi";
								}

								ImGui::Checkbox("PYTHON", &WPPYTHON);
								if (WPPYTHON) {
									WPAK = WPLR = WPMP5 = WPSMG = WPTHOMP = WPM249 = WPHMLMG = WPSEMI = false;
									wptext = "Python";
								}



							} ImGui::EndChild();
							ImGui::SetCursorPos(ImVec2(240, 5));
							custom::MenuChild("Sensitivity", ImVec2(220, 200)); {
								ImGui::SliderFloat(("##Sensitivity"), &Sensitivity, 0.001, 2, ("%.2f"));
								ImGui::Text(("FOV"));
								ImGui::SliderInt(("##FOV"), &FOV, 65, 90);
								if (Sc == true) {

									script();
								}

							} ImGui::EndChild();
							ImGui::SetCursorPos(ImVec2(240, 220));
							custom::MenuChild("Header", ImVec2(220, 300)); {
								if (Sc) {
									script();
								}

								// สร้างช่องเช็คบ็อกซ์แทนปุ่มสำหรับโมดูลอาวุธ
								ImGui::Checkbox("8x", &Mod8X);
								if (Mod8X) {
									Mod16X = ModHOLO = ModHAND = false;
									scptext = "8x";
								}

								ImGui::Checkbox("16x", &Mod16X);
								if (Mod16X) {
									Mod8X = ModHOLO = ModHAND = false;
									scptext = "16x";
								}

								ImGui::Checkbox("Hand", &ModHAND);
								if (ModHAND) {
									Mod8X = Mod16X = ModHOLO = false;
									scptext = "Hand";
								}

								ImGui::Checkbox("Holo", &ModHOLO);
								if (ModHOLO) {
									Mod8X = Mod16X = ModHAND = false;
									scptext = "Holo";
								}

								ImGui::Checkbox("Silen", &ModSILEN);
								if (ModSILEN) {
									brltext = "Silen";
								}

								// กลุ่มช่องเช็คบ็อกซ์สำหรับรีเซ็ต
								ImGui::BeginGroup();
								ImGui::Checkbox("MOD Reset", &resetMods);
								if (resetMods) {
									ModSILEN = ModHOLO = ModHAND = Mod8X = Mod16X = false;
									brltext = "-";
									scptext = "-";
									resetMods = false;  // รีเซ็ตตัวแปรรีเซ็ตเองเพื่อหลีกเลี่ยงการเปิดอยู่ตลอดเวลา
								}
								ImGui::EndGroup();

								ImGui::Checkbox("Reset", &resetAll);
								if (resetAll) {
									ModSILEN = ModHOLO = ModHAND = Mod8X = Mod16X = false;
									brltext = "-";
									scptext = "-";
									wptext = "-";
									WPLR = WPMP5 = WPTHOMP = WPAK = WPSMG = WPM249 = WPHMLMG = WPSEMI = WPPYTHON = false;
									resetAll = false;  // รีเซ็ตตัวแปรรีเซ็ตเอง
								}


							} ImGui::EndChild();

						}

					}

					case settingconfig: {
						custom::MenuChild("Script Reset", ImVec2(220, 300)); {
							if (Sc == true) {

								script();
							}
							ImGui::Keybind(" MOD Reset", &modreset, true);
							ImGui::Keybind(" Reset", &reset, true);

						} ImGui::EndChild();


					}


					}
					switch (tabmenu) {

					case configs: {

						switch (subtabmenu)
					case globals: {

							custom::MenuChild("Configs", ImVec2(220, 300)); {

								ImGui::Checkbox("Anti Screenshot", &hwz);
								if (hwz)
								{
									SetWindowDisplayAffinity(hwnd, WDA_EXCLUDEFROMCAPTURE);
								}
								if (!hwz)
								{
									SetWindowDisplayAffinity(hwnd, WDA_NONE);
								}
								ImGui::Checkbox("Anti-AFK", &variable.antiafk);
								if (variable.antiafk == true)
								{
									if (variable.number == 500)
									{
										keybd_event(0x57, 0, KEYEVENTF_EXTENDEDKEY, 0);
										Sleep(500);
										keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0);
									}
									if (variable.number == 1000)
									{
										keybd_event(0x53, 0, KEYEVENTF_EXTENDEDKEY, 0);
										Sleep(500);
										keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0);
									}
									if (variable.number == 1500)
									{
										keybd_event(0x57, 0, KEYEVENTF_EXTENDEDKEY, 0);
										Sleep(500);
										keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0);
									}
									if (variable.number == 2000)
									{
										keybd_event(0x53, 0, KEYEVENTF_EXTENDEDKEY, 0);
										Sleep(500);
										keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0);
										variable.number = 0;
									}
									else
									{
										Sleep(10);
										variable.number = variable.number + 1;
									}


								}



							} ImGui::EndChild();
							custom::MenuChild("Save & Load", ImVec2(220, 130)); {
								if (ImGui::Button(("Save Setting"), ImVec2(100, 30))) {
									SaveConfig();
								}
								if (ImGui::Button(("Load Setting"), ImVec2(100, 30))) {
									LoadConfig();
								}


							} ImGui::EndChild();

						}

					}

					}



				} ImGui::EndChild();
				ImGui::PopStyleVar(2);

				ImGui::PopStyleVar(3);
			} ImGui::End();
		}

        // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.



        // Rendering
        ImGui::Render();
        const float clear_color_with_alpha[4] = { clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w };
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, clear_color_with_alpha);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

        g_pSwapChain->Present(1, 0); // Present with vsync
        //g_pSwapChain->Present(0, 0); // Present without vsync
    }

    // Cleanup
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

	CleanupDeviceD3D();
	::DestroyWindow(hwnd);
	::UnregisterClassW(wc.lpszClassName, wc.hInstance);

    return 0;
}

// Helper functions

bool CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
        return false;

    CreateRenderTarget();
    return true;
}

void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}

void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}

void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}

// Forward declare message handler from imgui_impl_win32.cpp
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Win32 message handler
// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application, or clear/overwrite your copy of the mouse data.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application, or clear/overwrite your copy of the keyboard data.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}
