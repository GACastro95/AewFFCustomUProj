// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMenuCheatManager.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMenuCheatManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuCheatManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuCheatManager();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELMenuCheatManager::execToggleDisplayUnitType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleDisplayUnitType();
		P_NATIVE_END;
	}
	void UELMenuCheatManager::StaticRegisterNativesUELMenuCheatManager()
	{
		UClass* Class = UELMenuCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleDisplayUnitType", &UELMenuCheatManager::execToggleDisplayUnitType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics
	{
		struct ELMenuCheatManager_eventToggleDisplayUnitType_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuCheatManager_eventToggleDisplayUnitType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuCheatManager_eventToggleDisplayUnitType_Parms), &Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuCheatManager, nullptr, "ToggleDisplayUnitType", nullptr, nullptr, sizeof(ELMenuCheatManager_eventToggleDisplayUnitType_Parms), Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMenuCheatManager_NoRegister()
	{
		return UELMenuCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_UELMenuCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMenuCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMenuCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMenuCheatManager_ToggleDisplayUnitType, "ToggleDisplayUnitType" }, // 3806777271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuCheatManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMenuCheatManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMenuCheatManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMenuCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMenuCheatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMenuCheatManager_Statics::ClassParams = {
		&UELMenuCheatManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMenuCheatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuCheatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMenuCheatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMenuCheatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMenuCheatManager, 819880010);
	template<> ABP_200508_API UClass* StaticClass<UELMenuCheatManager>()
	{
		return UELMenuCheatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMenuCheatManager(Z_Construct_UClass_UELMenuCheatManager, &UELMenuCheatManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMenuCheatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMenuCheatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
