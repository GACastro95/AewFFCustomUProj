// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftGameServerModeTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftGameServerModeTest() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AGameLiftGameServerModeTest_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AGameLiftGameServerModeTest();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AGameLiftGameServerModeTest::StaticRegisterNativesAGameLiftGameServerModeTest()
	{
	}
	UClass* Z_Construct_UClass_AGameLiftGameServerModeTest_NoRegister()
	{
		return AGameLiftGameServerModeTest::StaticClass();
	}
	struct Z_Construct_UClass_AGameLiftGameServerModeTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameLiftGameServerModeTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLiftGameServerModeTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameLiftGameServerModeTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameLiftGameServerModeTest.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameLiftGameServerModeTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameLiftGameServerModeTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameLiftGameServerModeTest_Statics::ClassParams = {
		&AGameLiftGameServerModeTest::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameLiftGameServerModeTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLiftGameServerModeTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameLiftGameServerModeTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameLiftGameServerModeTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameLiftGameServerModeTest, 1584842654);
	template<> ABP_200508_API UClass* StaticClass<AGameLiftGameServerModeTest>()
	{
		return AGameLiftGameServerModeTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameLiftGameServerModeTest(Z_Construct_UClass_AGameLiftGameServerModeTest, &AGameLiftGameServerModeTest::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AGameLiftGameServerModeTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameLiftGameServerModeTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
