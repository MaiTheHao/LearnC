#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Chương trình này mô phỏng việc tạo ra một nhóm zombie với số lượng và thuộc tính ngẫu nhiên.
// Mỗi zombie có điểm sức khỏe (hp) và sát thương (damage) được khởi tạo ngẫu nhiên.
// Người dùng sẽ nhập vào số lượng zombie muốn tạo, và chương trình sẽ tạo ra nhóm zombie đó.

// Lớp đại diện cho một zombie
class zombie {
private:
    int hp, damage; // Điểm sức khỏe và sát thương của zombie (riêng tư, chỉ truy cập bên trong lớp)

public:
    // Hàm khởi tạo
    zombie() {
        // Khởi tạo ngẫu nhiên điểm sức khỏe từ 10 đến 50
        hp = (rand() % 5 + 1) * 10;
        // Khởi tạo ngẫu nhiên sát thương từ 5 đến 10
        damage = 5 + (rand() % 6);

        // In thông báo zombie được tạo
        cout << "ZOMBIE CREATED:\n-HP: " << hp << "\n-Damage: " << damage << endl;
    }

    // Hàm hủy
    ~zombie() {
        // In thông báo zombie chết
        cout << "Zombie died" << endl;
    }
};

// Lớp đại diện cho một nhóm zombie
class zombie_public {
private:
    int size; // Số lượng zombie trong nhóm
    zombie* list; // Con trỏ đến mảng các zombie

    // Hàm riêng để tạo các zombie
    void spawn_zombie();

public:
    // Hàm khởi tạo
    zombie_public(int size) {
        // Gán số lượng zombie cho nhóm
        this->size = size;
        // Cấp phát bộ nhớ cho mảng zombie
        this->list = new zombie[size];
        // Tạo các zombie trong nhóm
        spawn_zombie();
        // In thông báo tạo nhóm zombie
        cout << "A GROUP OF ZOMBIES WERE SPAWNED WITH " << size << " ZOMBIES." << endl;
    }

    // Hàm hủy
    ~zombie_public() {
        // Giải phóng bộ nhớ đã cấp phát cho mảng zombie
        delete[] list;
        // In thông báo xóa nhóm zombie
        cout << "A GROUP OF ZOMBIES WITH " << size << " ZOMBIES WERE DELETED." << endl;
    }
};

int main() {
    // Khởi tạo bộ tạo số ngẫu nhiên
    srand(time(0));

    // Nhập số lượng zombie từ người dùng
    int number_of_zombies;
    cout << "Number of zombies: ";
    cin >> number_of_zombies;

    // Tạo một nhóm zombie với số lượng đã nhập
    zombie_public group_a(number_of_zombies);

    return 0;
}

// Hàm tạo từng zombie trong nhóm
void zombie_public::spawn_zombie() {
    for (int i = 0; i < size; i++) {
        list[i] = zombie();
    }
}

// Bạn có thể thấy thay vì viết n dòng lệnh như nhau thì bạn chỉ cần tạo một đối tượng,
// và sử dụng vòng lặp để khởi tạo các zombie. Điều này giúp mã nguồn ngắn gọn và dễ bảo trì hơn.
// Nếu bạn muốn bổ sung chức năng cho đối tượng zombie, bạn chỉ cần thay đổi lớp zombie,
// và tất cả các đối tượng zombie sẽ tự động có các chức năng mới mà không cần thay đổi mã nguồn ở các nơi khác.