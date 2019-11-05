// Animal.h

#include <iostream>
#include <string>

namespace toolbox
{

class Animal
{
public:
	// Default constructor
	Animal(const std::string& name);

	// Virtual default destructor
	virtual ~Animal() = default;

	// Pure virtual Speak fuction
	virtual std::string Speak() const = 0;
	
	// Pure virtual Info function
	virtual std::string Info() const = 0;

	// Return the name
	inline std::string GetName() const
	{
		return mName;
	}

	// Get/set the number of legs or fins
	void SetNumLimbs(size_t numLimbs)
	{
		mNumLimbs = numLimbs;
	}
	inline size_t GetNumLimbs() const
	{
		return mNumLimbs;
	}

	// Print information about the Animal
	/*
	std::ostream& std::operator<<(std::ostream& os) const
	{
		return os << Info();
	}
	*/

private:
	std::string mName;
	size_t mNumLimbs;
};

class Cat : public Animal
{
public:
	// Default constructor
	Cat(const std::string& name);

	// Virtual default destructor
	virtual ~Cat() = default;

	// Override the Speak function
	std::string Speak() const override;

	// Set the number of whiskers
	void SetNumWhiskers(size_t numWhiskers);
	
	// Print information about the Cat
	std::string Info() const override;

private:
	size_t mNumWhiskers;
};

class Fish : public Animal
{
public:
	// Default constructor
	Fish(const std::string& name);

	// Virtual default destructor
	virtual ~Fish() = default;

	// Override the Speak function
	std::string Speak() const override;

	// Set whether it has scales or not
	void SetHasScales(bool hasScales);

	// Print information about the Fish
	std::string Info() const override;

private:
	bool mHasScales;
};

class Octopus : public Fish
{
public:
	// Default constructor
	Octopus(const std::string& name);

	// Virtual default destructor
	virtual ~Octopus() = default;

	// Override the Speak function
	std::string Speak() const override;
	
	// Print information about the Octopus
	std::string Info() const override;
};

} // namespace toolbox
