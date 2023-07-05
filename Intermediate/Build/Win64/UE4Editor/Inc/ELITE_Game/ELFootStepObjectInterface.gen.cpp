// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELFootStepObjectInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELFootStepObjectInterface() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELFootStepObjectInterface_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELFootStepObjectInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	DEFINE_FUNCTION(IELFootStepObjectInterface::execCanStepOnFoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStepOnFoot_Implementation();
		P_NATIVE_END;
	}
	bool IELFootStepObjectInterface::CanStepOnFoot() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanStepOnFoot instead.");
		ELFootStepObjectInterface_eventCanStepOnFoot_Parms Parms;
		return Parms.ReturnValue;
	}
	void UELFootStepObjectInterface::StaticRegisterNativesUELFootStepObjectInterface()
	{
		UClass* Class = UELFootStepObjectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStepOnFoot", &IELFootStepObjectInterface::execCanStepOnFoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELFootStepObjectInterface_eventCanStepOnFoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELFootStepObjectInterface_eventCanStepOnFoot_Parms), &Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFootStepObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFootStepObjectInterface, nullptr, "CanStepOnFoot", nullptr, nullptr, sizeof(ELFootStepObjectInterface_eventCanStepOnFoot_Parms), Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELFootStepObjectInterface_NoRegister()
	{
		return UELFootStepObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELFootStepObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELFootStepObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELFootStepObjectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELFootStepObjectInterface_CanStepOnFoot, "CanStepOnFoot" }, // 186465541
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFootStepObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELFootStepObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELFootStepObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELFootStepObjectInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELFootStepObjectInterface_Statics::ClassParams = {
		&UELFootStepObjectInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELFootStepObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELFootStepObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELFootStepObjectInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELFootStepObjectInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELFootStepObjectInterface, 1323911345);
	template<> ELITE_GAME_API UClass* StaticClass<UELFootStepObjectInterface>()
	{
		return UELFootStepObjectInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELFootStepObjectInterface(Z_Construct_UClass_UELFootStepObjectInterface, &UELFootStepObjectInterface::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELFootStepObjectInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELFootStepObjectInterface);
	static FName NAME_UELFootStepObjectInterface_CanStepOnFoot = FName(TEXT("CanStepOnFoot"));
	bool IELFootStepObjectInterface::Execute_CanStepOnFoot(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELFootStepObjectInterface::StaticClass()));
		ELFootStepObjectInterface_eventCanStepOnFoot_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELFootStepObjectInterface_CanStepOnFoot);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELFootStepObjectInterface*)(O->GetNativeInterfaceAddress(UELFootStepObjectInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanStepOnFoot_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
