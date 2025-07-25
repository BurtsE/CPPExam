#include "house.hpp"
#include "speaker.hpp"
#include <string>
#include <vector>
#include <memory>

int main() {

    // Создаем дом
    
    auto h = House();

    // Создаем комнаты

    auto kitchen = Room("kitchen");

    auto bedroom = Room("bedroom");

    auto someRoom = Room("some-room");

    // Создаем колонки

    auto kitchenSpeaker = Speaker(kitchen);

    auto bedroomSpeaker = Speaker(bedroom);

    auto someSpeaker = Speaker(someRoom);


    // Создаем список девайсов на кухне (чайник, термометр, увлажнитель)


    auto teapot = ActiveDevice(0, "teapot");

    auto thermometer = SensorDevice(1, "thermometer");

    auto humidifier = CompositeDevice(2, "humidifier");
    
    // Добавляем девайсы на кухню и активируем

    kitchenSpeaker.add_device(std::make_shared<ActiveDevice>(teapot));

    kitchenSpeaker.add_device(std::make_shared<SensorDevice>(thermometer));

    kitchenSpeaker.add_device(std::make_shared<CompositeDevice>(humidifier));

    kitchenSpeaker.activate_all();

    // Добавляем колонки в дом

    h.add_speaker(kitchenSpeaker.get_name(), kitchenSpeaker);

    h.add_speaker(bedroomSpeaker.get_name(), bedroomSpeaker);

    h.add_speaker(someSpeaker.get_name(), someSpeaker);



    ActiveDevice* a;

    SensorDevice* s;

    CompositeDevice* c;

    for (auto i = 0; i < 3; ++i) {

        auto d = h[kitchenSpeaker.get_name()].get_device(i);

        if (d == nullptr) {

            continue;

        }


        std::cout << std::boolalpha << d->name() << " is online: " << d->is_online() << std::endl;

        switch (d->get_type()) {


            case DeviceType::ACTIVE:

                std::cout << "ACTIVE DEVICE" << std::endl;

                a = dynamic_cast<ActiveDevice*>(d.get());

                std::cout << std::boolalpha << "active: " << a->is_active() << std::endl;

                break;

            case DeviceType::SENSOR:

                std::cout << "SENSOR DEVICE" << std::endl;

                s = dynamic_cast<SensorDevice*>(d.get());

                std::cout<< s->indicate_value() << std::endl;

                break;

            case DeviceType::COMPOSITE:

                std::cout << "COMPOSITE DEVICE" << std::endl;

                c = dynamic_cast<CompositeDevice*>(d.get());

                c->toggle();

                std::cout << std::boolalpha  << "active: " << c->is_active() << std::endl;

                std::cout << c->indicate_value() << std::endl;

                break;

        }

        std::cout << std::endl;

    }

    // Вывод списка колонок при помощи перегруженного оператора

    std::cout << h << std::endl;

}