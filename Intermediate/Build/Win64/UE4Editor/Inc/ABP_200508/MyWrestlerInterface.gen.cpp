// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MyWrestlerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWrestlerInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IMyWrestlerInterface::execEntryMyWrestler)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bOutAddedNew);
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_DataObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EntryMyWrestler_Implementation(Z_Param_Out_bOutAddedNew,Z_Param_DataObject);
		P_NATIVE_END;
	}
	bool IMyWrestlerInterface::EntryMyWrestler(bool& bOutAddedNew, UMyWrestlerDataObject* DataObject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EntryMyWrestler instead.");
		MyWrestlerInterface_eventEntryMyWrestler_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMyWrestlerInterface::StaticRegisterNativesUMyWrestlerInterface()
	{
		UClass* Class = UMyWrestlerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EntryMyWrestler", &IMyWrestlerInterface::execEntryMyWrestler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics
	{
		static void NewProp_bOutAddedNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutAddedNew;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_bOutAddedNew_SetBit(void* Obj)
	{
		((MyWrestlerInterface_eventEntryMyWrestler_Parms*)Obj)->bOutAddedNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_bOutAddedNew = { "bOutAddedNew", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyWrestlerInterface_eventEntryMyWrestler_Parms), &Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_bOutAddedNew_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_DataObject = { "DataObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyWrestlerInterface_eventEntryMyWrestler_Parms, DataObject), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyWrestlerInterface_eventEntryMyWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyWrestlerInterface_eventEntryMyWrestler_Parms), &Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_bOutAddedNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_DataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyWrestlerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyWrestlerInterface, nullptr, "EntryMyWrestler", nullptr, nullptr, sizeof(MyWrestlerInterface_eventEntryMyWrestler_Parms), Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyWrestlerInterface_NoRegister()
	{
		return UMyWrestlerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMyWrestlerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyWrestlerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyWrestlerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyWrestlerInterface_EntryMyWrestler, "EntryMyWrestler" }, // 3686497351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWrestlerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MyWrestlerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyWrestlerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMyWrestlerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyWrestlerInterface_Statics::ClassParams = {
		&UMyWrestlerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMyWrestlerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyWrestlerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyWrestlerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyWrestlerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyWrestlerInterface, 4152410669);
	template<> ABP_200508_API UClass* StaticClass<UMyWrestlerInterface>()
	{
		return UMyWrestlerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyWrestlerInterface(Z_Construct_UClass_UMyWrestlerInterface, &UMyWrestlerInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UMyWrestlerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyWrestlerInterface);
	static FName NAME_UMyWrestlerInterface_EntryMyWrestler = FName(TEXT("EntryMyWrestler"));
	bool IMyWrestlerInterface::Execute_EntryMyWrestler(UObject* O, bool& bOutAddedNew, UMyWrestlerDataObject* DataObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMyWrestlerInterface::StaticClass()));
		MyWrestlerInterface_eventEntryMyWrestler_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMyWrestlerInterface_EntryMyWrestler);
		if (Func)
		{
			Parms.bOutAddedNew=bOutAddedNew;
			Parms.DataObject=DataObject;
			O->ProcessEvent(Func, &Parms);
			bOutAddedNew=Parms.bOutAddedNew;
		}
		else if (auto I = (IMyWrestlerInterface*)(O->GetNativeInterfaceAddress(UMyWrestlerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->EntryMyWrestler_Implementation(bOutAddedNew,DataObject);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
