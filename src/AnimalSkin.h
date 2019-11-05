// AnimalSkin.h

#include <iostream>
#include <string>

namespace toolbox
{

class AnimalSkin
{
public:
	// Default constructor
	AnimalSkin(const std::string& type, const std::string& color);

	// Virtual default destructor
	virtual ~AnimalSkin() = default;

	// Get the type
	inline std::string GetType() const
	{
		return mType;
	}

	// Get the color
	inline std::string GetColor() const
	{
		return mColor;
	}

	// Print information about the AnimalSkin
	virtual std::string Info() const = 0;

private:
	std::string mType;
	std::string mColor;
};

class CatSkin : public AnimalSkin
{
public:
	// Default constructor
	CatSkin(const std::string& color);

	// Virtual default destructor
	virtual ~CatSkin() = default;

	// Set/get if the Cat has stripes
	void SetHasStripes(bool hasStripes)
	{
		mHasStripes = hasStripes;
	}
	bool GetHasStripes() const
	{
		return mHasStripes;
	}

	// Print information about the CatSkin
	std::string Info() const override;

private:
	bool mHasStripes;
};

class FishSkin : public AnimalSkin
{
public:
	// Default constructor
	FishSkin(const std::string& color);

	// Virtual default destructor
	virtual ~FishSkin() = default;

	// Set/get if the Fish has suction cups
	void SetHasSuctionCups(bool hasSuctionCups)
	{
		mHasSuctionCups = hasSuctionCups;
	}
	bool GetHasSuctionCups() const
	{
		return mHasSuctionCups;
	}

	// Print information about the Fish
	std::string Info() const override;

private:
	bool mHasSuctionCups;
};

} // namespace toolbox
