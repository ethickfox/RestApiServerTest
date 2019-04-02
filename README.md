# RestApiServerTest
Test task for YADRO

Requirements Cutelyst 2.8.0, Qt 5.9.5

Для работы API необходимо установить Cutelist
Необходимые команды:

sudo apt install git cmake g++ qtbase5-dev clearsilver-dev libgrantlee5-dev uuid-dev libcap-dev libzmq3-dev
git clone https://github.com/cutelyst/cutelyst.git
cd cutelyst; mkdir build && cd build
sudo apt install doxygen
cmake .. -DCMAKE_INSTALL_PREFIX=/usr -DPLUGIN_VIEW_CLEARSILVER=on -DPLUGIN_VIEW_GRANTLEE=on -DPLUGIN_VIEW_EMAIL=off
sudo make install

Чтобы проверить, что все работает
cutelyst2 --version

Чуть подробнее об этом я писал тут http://ethickeep.ru/post32

Далее необходимо CMakeLists.txt открыть с помощью QtCreator
Настроить проект выбрав временный комплект
Либо забилдить проект через консоль,необходимо, чтобы все билдилось в папку проекта build

Теперь в папке проекта перейти в build/src и запустить команду
cutelyst2 -r --server --app-file имяпроекта.so
в данном случае 
cutelyst2 -r --server --app-file libRestAPIService.so
