// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiInputHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiInputHandler() {}
// Cross Module References
	IMGUI_API UClass* Z_Construct_UClass_UImGuiInputHandler_NoRegister();
	IMGUI_API UClass* Z_Construct_UClass_UImGuiInputHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	void UImGuiInputHandler::StaticRegisterNativesUImGuiInputHandler()
	{
	}
	UClass* Z_Construct_UClass_UImGuiInputHandler_NoRegister()
	{
		return UImGuiInputHandler::StaticClass();
	}
	struct Z_Construct_UClass_UImGuiInputHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImGuiInputHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiInputHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ImGuiInputHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ImGuiInputHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImGuiInputHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImGuiInputHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImGuiInputHandler_Statics::ClassParams = {
		&UImGuiInputHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UImGuiInputHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiInputHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImGuiInputHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImGuiInputHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImGuiInputHandler, 1759097861);
	template<> IMGUI_API UClass* StaticClass<UImGuiInputHandler>()
	{
		return UImGuiInputHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImGuiInputHandler(Z_Construct_UClass_UImGuiInputHandler, &UImGuiInputHandler::StaticClass, TEXT("/Script/ImGui"), TEXT("UImGuiInputHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImGuiInputHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
