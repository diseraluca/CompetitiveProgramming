#include <iostream>
#include <vector>
#include <utility>

struct LoanData {
public:
	int duration;
	double payment;
	double total;
	int records;
};

int main() {
	LoanData loan{};
	std::vector<std::pair<int, double>> records;
	std::pair<int, double> record;

	while (true) {
		std::cin >> loan.duration >> loan.payment >> loan.total >> loan.records;

		if (loan.duration < 0) {
			break;
		}

		records.resize(loan.duration);
		while (loan.records--) {
			std::cin >> record.first >> record.second;

			for (auto it = std::begin(records) + record.first; it != std::end(records); ++it) {
				records.emplace(it, record.first, record.second);
			}
		}

		int month{0};
		double monthlyDue{ loan.total / loan.duration };
		double value{ (loan.total + loan.payment) * (1 - records[month].first) };

		while (value <= )
	}
}