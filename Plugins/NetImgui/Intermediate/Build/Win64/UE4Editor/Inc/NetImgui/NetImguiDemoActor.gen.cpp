// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetImgui/Public/NetImguiDemoActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetImguiDemoActor() {}
// Cross Module References
	NETIMGUI_API UClass* Z_Construct_UClass_ANetImguiDemoActor_NoRegister();
	NETIMGUI_API UClass* Z_Construct_UClass_ANetImguiDemoActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NetImgui();
// End Cross Module References
	void ANetImguiDemoActor::StaticRegisterNativesANetImguiDemoActor()
	{
	}
	UClass* Z_Construct_UClass_ANetImguiDemoActor_NoRegister()
	{
		return ANetImguiDemoActor::StaticClass();
	}
	struct Z_Construct_UClass_ANetImguiDemoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetImguiDemoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetImgui,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetImguiDemoActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NetImguiDemoActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NetImguiDemoActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetImguiDemoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetImguiDemoActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetImguiDemoActor_Statics::ClassParams = {
		&ANetImguiDemoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetImguiDemoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetImguiDemoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetImguiDemoActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetImguiDemoActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetImguiDemoActor, 3841139718);
	template<> NETIMGUI_API UClass* StaticClass<ANetImguiDemoActor>()
	{
		return ANetImguiDemoActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetImguiDemoActor(Z_Construct_UClass_ANetImguiDemoActor, &ANetImguiDemoActor::StaticClass, TEXT("/Script/NetImgui"), TEXT("ANetImguiDemoActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetImguiDemoActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
