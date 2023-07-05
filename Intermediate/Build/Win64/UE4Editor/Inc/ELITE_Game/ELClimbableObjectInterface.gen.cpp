// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELClimbableObjectInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELClimbableObjectInterface() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELClimbableObjectInterface_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELClimbableObjectInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELHoldComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IELClimbableObjectInterface::execFindHoldComponent)
	{
		P_GET_OBJECT_REF(UELHoldComponent,Z_Param_Out_HoldComponent);
		P_GET_STRUCT(FVector,Z_Param_CurrentLocation);
		P_GET_UBOOL(Z_Param_bHand);
		P_GET_UBOOL(Z_Param_bFoot);
		P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindHoldComponent_Implementation(Z_Param_Out_HoldComponent,Z_Param_CurrentLocation,Z_Param_bHand,Z_Param_bFoot,Z_Param_TagName);
		P_NATIVE_END;
	}
	void IELClimbableObjectInterface::FindHoldComponent(UELHoldComponent*& HoldComponent, FVector CurrentLocation, bool bHand, bool bFoot, const FName TagName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FindHoldComponent instead.");
	}
	void UELClimbableObjectInterface::StaticRegisterNativesUELClimbableObjectInterface()
	{
		UClass* Class = UELClimbableObjectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindHoldComponent", &IELClimbableObjectInterface::execFindHoldComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHand_MetaData[];
#endif
		static void NewProp_bHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFoot_MetaData[];
#endif
		static void NewProp_bFoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TagName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_HoldComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_HoldComponent = { "HoldComponent", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELClimbableObjectInterface_eventFindHoldComponent_Parms, HoldComponent), Z_Construct_UClass_UELHoldComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_HoldComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_HoldComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_CurrentLocation = { "CurrentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELClimbableObjectInterface_eventFindHoldComponent_Parms, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bHand_SetBit(void* Obj)
	{
		((ELClimbableObjectInterface_eventFindHoldComponent_Parms*)Obj)->bHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bHand = { "bHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELClimbableObjectInterface_eventFindHoldComponent_Parms), &Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bHand_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bFoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bFoot_SetBit(void* Obj)
	{
		((ELClimbableObjectInterface_eventFindHoldComponent_Parms*)Obj)->bFoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bFoot = { "bFoot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELClimbableObjectInterface_eventFindHoldComponent_Parms), &Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bFoot_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELClimbableObjectInterface_eventFindHoldComponent_Parms, TagName), METADATA_PARAMS(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_TagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_TagName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_HoldComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_CurrentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_bFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::NewProp_TagName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELClimbableObjectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELClimbableObjectInterface, nullptr, "FindHoldComponent", nullptr, nullptr, sizeof(ELClimbableObjectInterface_eventFindHoldComponent_Parms), Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELClimbableObjectInterface_NoRegister()
	{
		return UELClimbableObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELClimbableObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELClimbableObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELClimbableObjectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELClimbableObjectInterface_FindHoldComponent, "FindHoldComponent" }, // 2681715112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELClimbableObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELClimbableObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELClimbableObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELClimbableObjectInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELClimbableObjectInterface_Statics::ClassParams = {
		&UELClimbableObjectInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELClimbableObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELClimbableObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELClimbableObjectInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELClimbableObjectInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELClimbableObjectInterface, 21730518);
	template<> ELITE_GAME_API UClass* StaticClass<UELClimbableObjectInterface>()
	{
		return UELClimbableObjectInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELClimbableObjectInterface(Z_Construct_UClass_UELClimbableObjectInterface, &UELClimbableObjectInterface::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELClimbableObjectInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELClimbableObjectInterface);
	static FName NAME_UELClimbableObjectInterface_FindHoldComponent = FName(TEXT("FindHoldComponent"));
	void IELClimbableObjectInterface::Execute_FindHoldComponent(const UObject* O, UELHoldComponent*& HoldComponent, FVector CurrentLocation, bool bHand, bool bFoot, const FName TagName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELClimbableObjectInterface::StaticClass()));
		ELClimbableObjectInterface_eventFindHoldComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELClimbableObjectInterface_FindHoldComponent);
		if (Func)
		{
			Parms.HoldComponent=HoldComponent;
			Parms.CurrentLocation=CurrentLocation;
			Parms.bHand=bHand;
			Parms.bFoot=bFoot;
			Parms.TagName=TagName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			HoldComponent=Parms.HoldComponent;
		}
		else if (auto I = (const IELClimbableObjectInterface*)(O->GetNativeInterfaceAddress(UELClimbableObjectInterface::StaticClass())))
		{
			I->FindHoldComponent_Implementation(HoldComponent,CurrentLocation,bHand,bFoot,TagName);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
