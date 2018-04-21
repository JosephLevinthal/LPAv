#include <iostream>

using namespace std;

int sortQueue(int *v, int array_size){
    int i;
    int aux;
    bool need_change = true;
    int j = 0;
    int x = 0;
    while(need_change){
        need_change = false;
        for(i = 0; i < array_size - 1; i++){
            if(v[i] < v[i + 1]){
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                need_change = true;
            } else {
                x += 1;
            }
        }
        j += 1;
    }
}

int count_changes(int *v1, int *v2, int array_size){
    int i;
    int students = 0;
    for(i = 0; i < array_size; i++){
        if(v1[i] == v2[i])
            students += 1;
    }
    return students;
}

int main(int argc, const char * argv[]) {
    int total;
    int students;
    int i, j;
    cin >> total;
    for(i = 0; i < total; i++){
        cin >> students;
        int notas[students];
        int originais[students];
        for(j = 0; j < students; j++){
            cin >> notas[j];
            originais[j] = notas[j];
        }
        sortQueue(notas, students);
        cout << count_changes(notas, originais, students) << endl;
    }
}
