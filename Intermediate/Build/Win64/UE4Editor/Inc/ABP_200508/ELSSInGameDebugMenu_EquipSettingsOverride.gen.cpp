// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSInGameDebugMenu_EquipSettingsOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSInGameDebugMenu_EquipSettingsOverride() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSSInGameDebugMenu_EquipSettingsOverride::execCreateMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateMenu();
		P_NATIVE_END;
	}
	void UELSSInGameDebugMenu_EquipSettingsOverride::StaticRegisterNativesUELSSInGameDebugMenu_EquipSettingsOverride()
	{
		UClass* Class = UELSSInGameDebugMenu_EquipSettingsOverride::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMenu", &UELSSInGameDebugMenu_EquipSettingsOverride::execCreateMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics
	{
		struct ELSSInGameDebugMenu_EquipSettingsOverride_eventCreateMenu_Parms
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
	void Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameDebugMenu_EquipSettingsOverride_eventCreateMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameDebugMenu_EquipSettingsOverride_eventCreateMenu_Parms), &Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameDebugMenu_EquipSettingsOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride, nullptr, "CreateMenu", nullptr, nullptr, sizeof(ELSSInGameDebugMenu_EquipSettingsOverride_eventCreateMenu_Parms), Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_NoRegister()
	{
		return UELSSInGameDebugMenu_EquipSettingsOverride::StaticClass();
	}
	struct Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSInGameDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSInGameDebugMenu_EquipSettingsOverride_CreateMenu, "CreateMenu" }, // 1170964230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSInGameDebugMenu_EquipSettingsOverride.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSInGameDebugMenu_EquipSettingsOverride.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSInGameDebugMenu_EquipSettingsOverride>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics::ClassParams = {
		&UELSSInGameDebugMenu_EquipSettingsOverride::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSInGameDebugMenu_EquipSettingsOverride, 1416698417);
	template<> ABP_200508_API UClass* StaticClass<UELSSInGameDebugMenu_EquipSettingsOverride>()
	{
		return UELSSInGameDebugMenu_EquipSettingsOverride::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSInGameDebugMenu_EquipSettingsOverride(Z_Construct_UClass_UELSSInGameDebugMenu_EquipSettingsOverride, &UELSSInGameDebugMenu_EquipSettingsOverride::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSInGameDebugMenu_EquipSettingsOverride"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSInGameDebugMenu_EquipSettingsOverride);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
