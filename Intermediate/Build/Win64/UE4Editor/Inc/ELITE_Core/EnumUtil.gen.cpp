// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EnumUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumUtil() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UEnumUtil_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UEnumUtil();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	void UEnumUtil::StaticRegisterNativesUEnumUtil()
	{
	}
	UClass* Z_Construct_UClass_UEnumUtil_NoRegister()
	{
		return UEnumUtil::StaticClass();
	}
	struct Z_Construct_UClass_UEnumUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnumUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnumUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnumUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnumUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnumUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnumUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnumUtil_Statics::ClassParams = {
		&UEnumUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnumUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnumUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnumUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnumUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnumUtil, 942580523);
	template<> ELITE_CORE_API UClass* StaticClass<UEnumUtil>()
	{
		return UEnumUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnumUtil(Z_Construct_UClass_UEnumUtil, &UEnumUtil::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UEnumUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnumUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
