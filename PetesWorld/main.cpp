// program to find countries in Pete's World
// date 08.11.2024
// author Pete Lowe
// Jake Dowd Gilligan 
// Mykyta Kozlovskyi
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to E or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0;
		}
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}

	}	
	
	if (letter == 'b' || letter == 'B') // written by Mykyta (sorry about coppie and paste =( )
	{
		if (region == 1)
		{
			std::cout << "Belize, Bermuda, Bolivia, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan, Brunei" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Bahrain, Barbados" << std::endl;
		}
	}

	if (letter == 'c' || letter == 'C') // written by Mykyta
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile,Colombia, Costa Rica " << std::endl;

		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic" << std::endl;

		}
		if (region == 3) {
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Congo, C�te D'ivoire" << std::endl;

		}
		if (region == 4) {
			std::cout << "Cambodia, China, Christmas Island, Cocos (Keeling) Islands, Cyprus" << std::endl;
		}
		if (region == 5) {
			std::cout << "Cuba, Cook Islands, Democratic Republic of the Congo, Cayman Islands" << std::endl;
		}
	}

	if (letter == 'd' || letter == 'D') //written by Mykyta
	{
		if (region == 1) {
			std::cout << "there are no ds in the americas" << std::endl;
		}
		if (region == 2) {
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3) {
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4) {
			std::cout << "there are no ds in the Asia" << std::endl;
		}
		if (region == 5) {
			std::cout << "Dominica, Dominican Republic " << std::endl;
		}
	}

	if (letter == 'e' || letter == 'E') //written by Mykyta
	{
		if (region == 1) {
			std::cout << "Ecuador,El Salvador " << std::endl;
		}
		if (region == 2) {
			std::cout << "Estonia " << std::endl;
		}
		if (region == 3) {
			std::cout << "Egypt, Equatorial Guinea, Eritrea, Ethiopia" << std::endl;
		}
		if (region == 4) {
			std::cout << "East Timor" << std::endl;
		}
		if (region == 5) {
			std::cout << "there are no Es in other world " << std::endl;
		}
	}




	
	// written by Mykyta
	

	
	if (letter == 'x' || letter == 'X') // written by Jake
  
	
		if (region == 1)
		{
			std::cout << "There are no Xs in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "there are no Xs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "there are no Xs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "there are no Xs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "there are no Xs in rest of the world" << std::endl;
		}

	if (letter == 'y' || letter == 'Y') // written by Jake
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "there are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen , Arabian penninsula" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "middle east" << std::endl;
		}

	}
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	

	
	
	return 1;
}