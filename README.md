✨ Simulasi 3D Monas : Representasi Virtual Monumen Nasional Menggunakan OpenGL dan FreeGLUT

🧑‍💻 Penulis: ALVIAN SYAH BURHANI🏫 Program Studi Informatika, Universitas Muhammadiyah Makassar📧 Email: 105841103522@student.unismuh.ac.id

📌 Abstrak

Simulasi tiga dimensi Monumen Nasional (Monas) telah dikembangkan menggunakan OpenGL dan FreeGLUT untuk merepresentasikan elemen-elemen seperti tangga, trapesium terbalik, badan tugu, mangkok api, api, serta taman dan jalan di sekitarnya. Interaksi pengguna melalui rotasi otomatis dan tombol arah meningkatkan eksplorasi visual. Properti warna dan pencahayaan ditetapkan untuk meningkatkan kesan realisme. Proyek ini bertujuan menghadirkan representasi visual arsitektur ikonik Indonesia dalam bentuk simulasi interaktif.

🔑 Kata Kunci: OpenGL, FreeGLUT, Monas, Visualisasi 3D, Simulasi Interaktif, Taman, Pencahayaan

🌍 Abstract

A 3D simulation of the National Monument (Monas) has been developed using OpenGL and FreeGLUT to represent elements such as stairs, inverted trapezoids, the body of the monument, the fire bowl, flames, and the surrounding park and roads. User interaction through auto-rotation and directional buttons enhances visual exploration. Color and lighting properties are set to enhance the sense of realism. This project aims to present a visual representation of Indonesia's iconic architecture in the form of an interactive simulation.

🔑 Keywords: OpenGL, FreeGLUT, Monas, 3D Visualization, Interactive Simulation, Park, Lighting

🧱 I. Pendahuluan

Visualisasi tiga dimensi (3D) telah menjadi pendekatan utama dalam memperkenalkan dan melestarikan objek arsitektural bersejarah secara digital. Teknologi ini memberikan pengalaman interaktif dan imersif, memungkinkan eksplorasi ruang virtual seolah-olah berada langsung di lokasi tersebut. Menurut UNESCO, digitalisasi warisan budaya memperpanjang masa pelestariannya, meningkatkan aksesibilitas global, dan menyediakan materi pembelajaran bermakna.

Monumen Nasional (Monas) adalah simbol perjuangan dan kemerdekaan Indonesia, dirancang dengan struktur dan filosofi yang mencerminkan identitas nasional. Visualisasi 3D menjadi pendekatan relevan untuk memperkenalkan Monas secara modern, khususnya untuk generasi digital.

OpenGL digunakan sebagai pustaka grafika lintas platform, sementara FreeGLUT memfasilitasi manajemen jendela dan input pengguna. Dibandingkan dengan game engine komersial, pendekatan ini lebih terbuka dan fleksibel untuk pendidikan.

Simulasi ini menyajikan elemen utama Monas seperti tangga berundak, badan tugu, mangkok api, nyala api, dan lingkungan sekitarnya. Sistem interaksi berbasis kamera rotasi otomatis dan tombol arah memperkaya eksplorasi pengguna secara virtual.

❓ Rumusan Masalah

Bagaimana merancang model 3D Monas secara modular menggunakan OpenGL dan FreeGLUT?

Bagaimana menyusun simulasi interaktif yang memungkinkan eksplorasi virtual?

Bagaimana menyusun elemen visual seperti tangga, trapesium, badan tugu, mangkok api, dan taman agar menyerupai bentuk aslinya?

🎯 Tujuan Penelitian

Menunjukkan proses perancangan dan pembangunan simulasi visualisasi 3D Monas menggunakan OpenGL dan FreeGLUT, dengan rotasi kamera otomatis dan kontrol manual yang menghasilkan visualisasi interaktif, akurat, dan edukatif.

🧪 II. Metodologi

🔧 A. Pendekatan Metodologi

Metode konstruktif digunakan untuk mengembangkan aplikasi visualisasi 3D Monas. Proses dimulai dengan analisis kebutuhan dan dokumentasi visual Monas, kemudian memodelkan setiap objek menggunakan geometri dasar dari OpenGL dan menyusunnya secara modular.

Transformasi lokal (translasi, rotasi, skala) digunakan untuk menyusun objek secara hierarkis. Warna objek disesuaikan dengan permukaan: coklat untuk tangga, putih untuk badan tugu, oranye untuk api, dan hijau untuk taman. Pencahayaan disetel menggunakan GL_LIGHT0.

Rotasi kamera diatur dalam fungsi idle(), dan kontrol manual disediakan melalui tombol panah.

💻 B. Perangkat Lunak

💬 Bahasa: C++

📚 Library: OpenGL, FreeGLUT

📝 Editor: Visual Studio Code

⚙️ Compiler: MinGW (GCC)

🧩 C. Rancangan Model 3D Monas

Setiap komponen Monas dirancang dalam fungsi modular seperti drawTangga(), drawBadanTugu(), drawApi(), dll.

🖼️ III. Hasil dan Pembahasan

🏗️ A. Implementasi Visual

Aplikasi menampilkan struktur Monas dengan komponen lengkap dan efek rotasi kamera otomatis serta kontrol manual. Elemen lingkungan seperti taman dan jalan ditambahkan untuk memperkuat konteks visual. Efek pencahayaan dan pewarnaan memperkuat realisme.

🧠 B. Pembahasan Komponen

Tangga dan Podium: glutSolidCube() berlapis dengan skala menurun.

Badan Tugu: 60 segmen vertikal membentuk menara runcing.

Mangkok Api & Api: Efek spiral dari gluCylinder().

Lapangan Hijau: Dasar visual berupa bidang luas hijau.

Taman Monas: Elemen simetris dan jalan hitam membingkai taman.

Jalan Besar: Jalan persegi besar mengelilingi area utama.

Jalan Penghubung: Akses radial dari pusat ke taman luar.

🎮 C. Kontrol Kamera

🔄 Otomatis: Kamera berputar via idle()

🎯 Manual: Arahkan pandangan dengan tombol ← / →

🎨 D. Hasil Rendering

Model Monas divisualisasikan lengkap: struktur, warna, pencahayaan, serta lingkungan realistis. Kamera fleksibel memperkaya pengalaman eksplorasi.

✅ IV. Kesimpulan

Simulasi 3D Monas berhasil direalisasikan menggunakan pendekatan modular dengan OpenGL dan FreeGLUT. Struktur dan elemen sekitarnya divisualisasikan secara proporsional, pencahayaan dinamis dan interaksi kamera memberikan pengalaman visual yang menarik dan edukatif.

📚 Daftar Pustaka

UNESCO, "Digital Heritage Preservation," 2023

J. M. Blinn, "OpenGL Graphics Rendering Engine," 2020

FreeGLUT Project, "freeglut: An OpenGL Utility Toolkit," 2021

Wikipedia, "Monumen Nasional," 2025

Kementerian Sekretariat Negara RI, "Monumen Nasional (Monas)," 2020

D. Hearn & M. P. Baker, Computer Graphics with OpenGL, 2014

OpenGL ARB, OpenGL Programming Guide, 2013

X. Wang & Z. Pan, "3D Cultural Heritage Visualization," 2021

📎 Lampiran

🖼️ 1. Gambar Hasil Rendering

(Tersedia di folder proyek)
