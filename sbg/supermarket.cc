#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <vector>

class SupermarketCheckout {

private:
  std::map<std::string, double> items;
  std::vector<std::string> scannedItems;
  std::set<std::string> discountItems = {
      "item1", "item2"}; // Update with your discount items

public:
  SupermarketCheckout() {}

  void addItem(std::string item, double price) { items[item] = price; }

  void scanItem(std::string item) { scannedItems.push_back(item); }

  void displayReceipt(double total) {
    std::cout << "Receipt:\n";
    for (const std::string &item : scannedItems) {
      std::cout << item << " - $" << std::fixed << std::setprecision(2)
                << items[item] << "\n";
    }
    std::cout << "Total: $" << std::fixed << std::setprecision(2) << total
              << "\n";
  }

  void calculateTotal() {
    double total = 0.0;
    std::map<std::string, int> itemCounts;

    // Count the number of occurrences for each item
    for (const std::string &item : scannedItems) {
      itemCounts[item]++;
    }

    // Calculate the total price, including discounts
    for (const auto &pair : itemCounts) {
      std::string item = pair.first;
      int count = pair.second;
      double price = items[item];

      // Apply the "buy 3 identical items and pay for 2" discount
      int numSetsOfThree = count / 3;
      int remainingItems = count % 3;
      total += numSetsOfThree * (2 * price) + remainingItems * price;

      // Apply the "buy 3 (in a set of items) and the cheapest is free" discount
      if (discountItems.count(item) && count >= 3) {
        int numSetsOfThreeDiscounted = (count - 1) / 3;
        total -= numSetsOfThreeDiscounted * price;
      }
    }

    displayReceipt(total);
  }
};

int main() {
  SupermarketCheckout checkout;

  // Add items to the supermarket inventory
  checkout.addItem("item1", 5.0);
  checkout.addItem("item2", 10.0);
  checkout.addItem("item3", 7.5);

  // Scan items at the checkout
  checkout.scanItem("item1");
  checkout.scanItem("item2");
  checkout.scanItem("item1");
  checkout.scanItem("item3");
  checkout.scanItem("item1");
  checkout.scanItem("item2");
  checkout.scanItem("item2");

  // Calculate and display the total price
  checkout.calculateTotal();

  return 0;
}
