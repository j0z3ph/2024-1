# Form implementation generated from reading ui file '/Users/j0z3ph/Repos/2024-1/PA/C16/conectar.ui'
#
# Created by: PyQt6 UI code generator 6.4.2
#
# WARNING: Any manual changes made to this file will be lost when pyuic6 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt6 import QtCore, QtGui, QtWidgets


class Ui_Dialog(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.resize(391, 182)
        self.gridLayout = QtWidgets.QGridLayout(Dialog)
        self.gridLayout.setObjectName("gridLayout")
        self.txtUser = QtWidgets.QLineEdit(parent=Dialog)
        self.txtUser.setObjectName("txtUser")
        self.gridLayout.addWidget(self.txtUser, 1, 1, 1, 3)
        self.label_3 = QtWidgets.QLabel(parent=Dialog)
        self.label_3.setObjectName("label_3")
        self.gridLayout.addWidget(self.label_3, 1, 0, 1, 1)
        self.label_2 = QtWidgets.QLabel(parent=Dialog)
        self.label_2.setObjectName("label_2")
        self.gridLayout.addWidget(self.label_2, 0, 2, 1, 1)
        self.label = QtWidgets.QLabel(parent=Dialog)
        self.label.setObjectName("label")
        self.gridLayout.addWidget(self.label, 0, 0, 1, 1)
        self.txtServer = QtWidgets.QLineEdit(parent=Dialog)
        self.txtServer.setObjectName("txtServer")
        self.gridLayout.addWidget(self.txtServer, 0, 1, 1, 1)
        self.buttonBox = QtWidgets.QDialogButtonBox(parent=Dialog)
        self.buttonBox.setOrientation(QtCore.Qt.Orientation.Horizontal)
        self.buttonBox.setStandardButtons(QtWidgets.QDialogButtonBox.StandardButton.Cancel|QtWidgets.QDialogButtonBox.StandardButton.Ok)
        self.buttonBox.setObjectName("buttonBox")
        self.gridLayout.addWidget(self.buttonBox, 2, 1, 1, 3)
        self.txtPort = QtWidgets.QLineEdit(parent=Dialog)
        self.txtPort.setInputMask("")
        self.txtPort.setObjectName("txtPort")
        self.gridLayout.addWidget(self.txtPort, 0, 3, 1, 1)

        self.retranslateUi(Dialog)
        self.buttonBox.accepted.connect(Dialog.accept) # type: ignore
        self.buttonBox.rejected.connect(Dialog.reject) # type: ignore
        QtCore.QMetaObject.connectSlotsByName(Dialog)
        Dialog.setTabOrder(self.txtServer, self.txtPort)
        Dialog.setTabOrder(self.txtPort, self.txtUser)

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Conectar"))
        self.label_3.setText(_translate("Dialog", "Usuario"))
        self.label_2.setText(_translate("Dialog", "Puerto"))
        self.label.setText(_translate("Dialog", "Servidor"))
