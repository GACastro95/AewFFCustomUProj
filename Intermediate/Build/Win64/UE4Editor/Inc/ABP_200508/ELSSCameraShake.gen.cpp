// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCameraShake() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraShake_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraShake();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShake();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSCameraShake::StaticRegisterNativesUELSSCameraShake()
	{
	}
	UClass* Z_Construct_UClass_UELSSCameraShake_NoRegister()
	{
		return UELSSCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UELSSCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMatineeCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraShake_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "CameraShakePattern" },
		{ "IncludePath", "ELSSCameraShake.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCameraShake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSCameraShake_Statics::ClassParams = {
		&UELSSCameraShake::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSCameraShake, 334458313);
	template<> ABP_200508_API UClass* StaticClass<UELSSCameraShake>()
	{
		return UELSSCameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSCameraShake(Z_Construct_UClass_UELSSCameraShake, &UELSSCameraShake::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSCameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
