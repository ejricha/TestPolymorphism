// AnimalSkin.cpp

#include "AnimalSkin.h"

#include <sstream>

namespace toolbox
{

// Default constructor
AnimalSkin::AnimalSkin(const std::string& type, const std::string& color) : mType(type), mColor(color)
{
}

// Print information about the AnimalSkin
std::string AnimalSkin::Info() const
{
	std::ostringstream os;
	os << "with " << GetType() << " skin";
	return os.str();
}

// Default constructor
CatSkin::CatSkin(const std::string& color) : AnimalSkin("furry", color)
{
}

// Print information about the AnimalSkin
std::string CatSkin::Info() const
{
	std::ostringstream os;
	os << "with " << GetType() << " skin";
	if (GetHasStripes())
	{
		os << " and stripes";
	}
	return os.str();
}

// Default constructor
FishSkin::FishSkin(const std::string& color) : AnimalSkin("slimy", color) 
{
}

// Print information about the AnimalSkin
std::string FishSkin::Info() const
{
	std::ostringstream os;
	os << "with " << GetType() << " skin";
	if (GetHasSuctionCups())
	{
		os << " and suction cups";
	}
	return os.str();
}

} // namespace toolbox
