#include "Osoba.h"
#ifndef TELEFONNI_SEZNAM_H
#define TELEFONNI_SEZNAM_H


namespace Model {
	class TelefonniSeznam {
		
		class PrvekSeznam {
		public:
			Entity::Osoba data;
			PrvekSeznam* dalsi;
			PrvekSeznam(Entity::Osoba data);
			~PrvekSeznam();
	/*		PrvekSeznam* getDalsi();
			void setDalsi(PrvekSeznam osoba);
			Entity::Osoba getData();
			void setData(Osoba prvek);*/
		};
	private:
		PrvekSeznam* _zacatek;
	public:
		~TelefonniSeznam();
		TelefonniSeznam();
		void pridejOsobu(Entity::Osoba o);
		std::string najdiTelefon(std::string jmeno) const;
		std::string najdiTelefon(int id) const;

	
	};

}
#endif // !TELEFONNI_SEZNAM_H
