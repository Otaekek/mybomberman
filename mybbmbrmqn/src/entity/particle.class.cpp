# include <particle.class.hpp>
# include <ctime>
	
	std::list<Particle*>* Particle::list = new std::list<Particle*>;

	Particle::Particle( float x, float y, int status, int model ) : Entity(status, x, y, status, model)
	{

		cycle = 0;
		float r;
		r = rand();
		r /= RAND_MAX;
		r /= 10;
		velx = (r * 2) - 1;

		r = rand();
		r /= RAND_MAX;
		vely = (r * 2);

		r = rand();
		r /= RAND_MAX;
		r /= 10;
		velz = (r * 2) - 1;
		//list.push_back(this);
	}

	Particle::Particle( Particle const & src )
	{
		*this = src;
	}

	Particle & Particle::operator=( Particle const & rhs )
	{
		(Particle)rhs;
		return (*this);
	}

	Particle::~Particle( void )
	{

	}

	void Particle::update()
	{
		vely -= 0.01;
		velx -= velx / 100;
		velz -= velz / 100;
		pos_y += vely / 10;
		pos_z += velz / 10;
		pos_x += velx / 10;
	}
