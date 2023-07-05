// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_LowerEngineWin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_LowerEngineWin() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineWin_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineWin();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineDefault();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveData_LowerEngineWin::StaticRegisterNativesUSaveData_LowerEngineWin()
	{
	}
	UClass* Z_Construct_UClass_USaveData_LowerEngineWin_NoRegister()
	{
		return USaveData_LowerEngineWin::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_LowerEngineWin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_LowerEngineWin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveData_LowerEngineDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_LowerEngineWin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_LowerEngineWin.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineWin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_LowerEngineWin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_LowerEngineWin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_LowerEngineWin_Statics::ClassParams = {
		&USaveData_LowerEngineWin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_LowerEngineWin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_LowerEngineWin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_LowerEngineWin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_LowerEngineWin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_LowerEngineWin, 1259605505);
	template<> ABP_200508_API UClass* StaticClass<USaveData_LowerEngineWin>()
	{
		return USaveData_LowerEngineWin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_LowerEngineWin(Z_Construct_UClass_USaveData_LowerEngineWin, &USaveData_LowerEngineWin::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_LowerEngineWin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_LowerEngineWin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
