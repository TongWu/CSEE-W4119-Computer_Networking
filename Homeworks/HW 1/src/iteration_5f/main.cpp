#include <iostream>

int main () {
	int packet_num = 16000;
	double packet_len_kb = 1.6;
	int bandwidth = 1024;
	double los_prob = 0.02;
	int tot_len = 25;
	int buff1;
	double buff2=double(tot_len) / double(bandwidth);
	int buff3 = packet_num;
	for (int i = 0; i < 20; ++i) {
		buff1 = int (buff3 * los_prob);
		buff2 += (double(buff1) * packet_len_kb) / 1048576.0;
		buff3 = buff1;
		printf("%f\n", buff2);
	}

}
