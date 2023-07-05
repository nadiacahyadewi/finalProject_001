#include <iostream>
using namespace std;

class Matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	Matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return ; }
	virtual void input() { return; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	void setActivity(float nilai) {
		this->activity = nilai;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(float nilai) {
		this->exercise = nilai;
	}

	float getExercise() {
		return exercise;
	}

	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}
};

class Pemrograman : public Matakuliah {
public:
	void input() {
		float presensi;
		cout << "Masukkan nilai Presensi : ";
		cin >> presensi;
		setPresensi(presensi);

		float activity;
		cout << "Masukkan nilai Activity : ";
		cin >> activity;
		setActivity(activity);

		float exercise;
		cout << "Masukkan nilai Exercise : ";
		cin >> exercise;
		setExercise(exercise);

		float tugasAkhir;
		cout << "Masukkan nilai Tugas Akhir : ";
		cin >> tugasAkhir;
		setTugasAkhir(tugasAkhir);
	}

	float hitungNilaiAkhir() {
		float nilaiAkhir = getPresensi() * 0.1 + getActivity() * 0.2 + getExercise() * 0.3 + getTugasAkhir() * 0.4;
		return nilaiAkhir;
	}

	void cekKelulusan() {
		float nilaiAkhir = hitungNilaiAkhir();

		if (nilaiAkhir > 75) {
			cout << "Selamat, Anda dinyatakan lulus mata kuliah Pemrograman dengan nilai akhir : " << nilaiAkhir << endl;
		}
		else {
			cout << "Maaf, Anda dinyatakan tidak lulus mata kuliah Pemrograman dengan nilai akhir : " << nilaiAkhir << endl;
		}
	}
};

int main() {
	char kembali;

	{
		cout << "Program dibuat" << endl;
		Pemrograman pemrograman;
		pemrograman.input();
		pemrograman.cekKelulusan();

		cout << "Apakah Anda ingin mengulang program? (Y/N) : ";
		cin >> kembali;
	}

	return 0;
};

