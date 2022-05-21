

 1. About AsmCtrl

 AsmCtrl is a sample for an Active-X control written in assembly.
 It's a full control, supports aggregation and events. So this control
 can be inserted as "object" in a WinWord/Excel document, in a VB
 "form" or in any container application which supports this stuff.


 2. How to generate and execute the sample

 To create the control you need Masm/JWasm, WinInc, MS LINK and MS RC.
 If the type information in AsmCtrl.IDL is to be changed, MS MIDL is 
 necessary to recreate AsmCtrl.TLB and also COMView might be helpful to
 recreate AsmCtrl.inc ( this can probably also done manually without too
 much efforts ). There's a Makefile supplied which will automate the job.

 After the binary has been created, it must be "registered":
 C:\>regsvr32.exe asmctrl.dll

 After registration, it can be used by any ActiveX container application
 ( Excel, COMView, VB, ... )

 When the control is to be uninstalled, it should first be unregistered
 with:
 C:\>regsvr32.exe /u asmctrl.dll


 3. Brief source file description

 The source files for the sample are:

 Name                 Description
-----------------------------------------------------------------
 AsmCtrl.asm          creates/destroys CAsmCtrl objects
 AsmCtrl.inc          AsmCtrl interfaces in assembly format (COMView gen.)
 DllMain.asm          dll entry points, register and unregister code
 CatProp.asm          ICategorizeProperties interface (optional, for VB)
 ClassFactory.asm     IClassFactory interface
 ConnectionPoint.asm  IConnectionPointCOntainer, IEnumConnectionPoints + IConnectionPoint
 DataObject.asm       IDataObject interface (optional)
 Dispatch.asm         IDispatch, IAsmCtrl interfaces
 OleControl.asm       IOleControl interface
 OleInPlaceObject.asm IOleInPlaceObject + IOleInPlaceActiveObject interfaces
 OleObject.asm        IOleObject interface
 Persist.asm          IPersistStorage, IPersistStreamInit, IPersistPropertyBag (optional)
 RunnableObject.asm   IRunnableObject interface (optional)
 Unknown.asm          IUnknown interface
 ViewObject.asm       IViewObject2 interface
 Others.asm           IProvideClassInfo + ISpecifyPropertyPages (opt) interface
 Utility.asm          some generic procs


4. History

 V1.0, 12/2001: first version
 V1.1, 03/2002: aggregation implemented. So AsmCtrl works with WinWord + Excel
 V1.2, 06/2002: code rearranged.
 V1.3, 12/2002: a change in dispatch.asm so typeinfo of IAsmCtrl doesn't need
                to be first typeinfo in type library.
 V1.4, 01/2011: put the dust off this sample and made in compatible with WinInc.
 V1.5, 02/2011: added DataObject.asm to make the sample support IDataObject.


5. License

 This sample is Public Domain.

 japheth
