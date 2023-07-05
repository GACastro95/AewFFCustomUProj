// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameSession() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameSession_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELSSGameSession::StaticRegisterNativesAELSSGameSession()
	{
	}
	UClass* Z_Construct_UClass_AELSSGameSession_NoRegister()
	{
		return AELSSGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameSession,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSGameSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGameSession_Statics::ClassParams = {
		&AELSSGameSession::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGameSession, 2702924670);
	template<> ABP_200508_API UClass* StaticClass<AELSSGameSession>()
	{
		return AELSSGameSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGameSession(Z_Construct_UClass_AELSSGameSession, &AELSSGameSession::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
