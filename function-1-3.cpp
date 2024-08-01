void count_digits(int array[4][4]) {
    int count[10] = {0}; 
    
   
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            int value = array[i][j];
            if (value >= 0 && value <= 9) {
                count[value]++;
            }
        }
    }


    for (int i = 0; i < 10; ++i) {
        cout << i << ":" << count[i];
        if (i < 9) {
            cout << ";";
        }
    }
    cout << endl;
}
