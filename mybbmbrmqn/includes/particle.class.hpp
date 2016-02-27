#ifndef PARTICLE_CLASS_HPP
# define PARTICLE_CLASS_HPP

# include <list>
# include <entity.class.hpp>
// #include <event.class.hpp>

class Entity;
// class Event;
class Particle : public Entity {
public:
	Particle( float x, float y, int status, int model );
	Particle( Particle const & src );
	Particle & operator=( Particle const & rhs );
	~Particle( void );

	static std::list<Particle*> *list;
	float pos_z;
	void update();

private:
	int cycle;
	float velx;
	float vely;
	float velz;

	Particle( void );


};

#endif