// Animal.cpp

#include "Animal.h"

#include <sstream>

namespace toolbox
{

// Default constructor
Animal::Animal(const std::string& name) : mName { name }
{
}

// Default constructor
Cat::Cat(const std::string& name, const std::string& color, bool hasStripes) : Animal(name), mNumWhiskers(4)
{
	SetSkinColor(color);
	//(dynamic_cast<CatSkin*>(mSkin.get()))->SetHasStripes(hasStripes);
	(dynamic_cast<CatSkin*>(mSkin))->SetHasStripes(hasStripes);
	SetNumLimbs(4);
}

// Override the Speak function
std::string Cat::Speak() const
{
	return "Meow";
}

// Set the number of whiskers
void Cat::SetNumWhiskers(size_t numWhiskers)
{
	mNumWhiskers = numWhiskers;
}
	
// Set the skin color
void Cat::SetSkinColor(const std::string& color)
{
	//mSkin = std::make_unique<CatSkin>(color);
	mSkin = new CatSkin(color);
}

// Print information about the Cat
std::string Cat::Info() const
{
	std::ostringstream os;
	os << "The Cat (" << mSkin->Info() << ")"
		<< " named " << GetName()
		<< " has " << GetNumLimbs() << " legs"
		<< " and " << mNumWhiskers << " whiskers"
		<< " and says \"" << Speak() << "\"";
	return os.str();
}

// Default constructor
Fish::Fish(const std::string& name, const std::string& color) : Animal(name), mHasScales(true)
{
	SetSkinColor(color);
	SetNumLimbs(4);
}

// Override the Speak function
std::string Fish::Speak() const
{
	return "Glub";
}

// Set whether it has scales or not
void Fish::SetHasScales(bool hasScales)
{
	mHasScales = hasScales;
}
	
// Set the skin color
void Fish::SetSkinColor(const std::string& color)
{
	//mSkin = std::make_unique<FishSkin>(color);
	mSkin = new FishSkin(color);
}

// Print information about the Fish
std::string Fish::Info() const
{
	std::ostringstream os;
	os << "The Fish (" << mSkin->Info() << ")"
		<< " named " << GetName()
		<< " has " << GetNumLimbs() << " legs"
		<< " and " << (mHasScales ? "scales" : "smooth skin")
		<< " and says \"" << Speak() << "\"";
	return os.str();
}

// Default constructor
Octopus::Octopus(const std::string& name, const std::string& color) : Fish(name, color)
{
	SetSkinColor(color);
	SetNumLimbs(8);
	SetHasScales(false);
}

// Override the Speak function
std::string Octopus::Speak() const
{
	return "Octopus Sounds!";
}
	
// Print information about the Octopus
std::string Octopus::Info() const
{
	std::ostringstream os;
	os << "The Octopus (" << mSkin->Info() << ")"
		<< " named " << GetName()
		<< " has " << GetNumLimbs() << " legs"
		<< " and a big brain"
		<< " and says \"" << Speak() << "\"";
	return os.str();
}

} // namespace toolbox
