// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiSettings() {}
// Cross Module References
	IMGUI_API UClass* Z_Construct_UClass_UImGuiSettings_NoRegister();
	IMGUI_API UClass* Z_Construct_UClass_UImGuiSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ImGui();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiKeyInfo();
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo();
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiDPIScaleInfo();
// End Cross Module References
	void UImGuiSettings::StaticRegisterNativesUImGuiSettings()
	{
	}
	UClass* Z_Construct_UClass_UImGuiSettings_NoRegister()
	{
		return UImGuiSettings::StaticClass();
	}
	struct Z_Construct_UClass_UImGuiSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImGuiInputHandlerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImGuiInputHandlerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShareKeyboardInput_MetaData[];
#endif
		static void NewProp_bShareKeyboardInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShareKeyboardInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShareGamepadInput_MetaData[];
#endif
		static void NewProp_bShareGamepadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShareGamepadInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShareMouseInput_MetaData[];
#endif
		static void NewProp_bShareMouseInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShareMouseInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSoftwareCursor_MetaData[];
#endif
		static void NewProp_bUseSoftwareCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSoftwareCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToggleInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DPIScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DPIScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImGuiSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ImGuiSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ImGuiInputHandlerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiSettings" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ImGuiInputHandlerClass = { "ImGuiInputHandlerClass", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImGuiSettings, ImGuiInputHandlerClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ImGuiInputHandlerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ImGuiInputHandlerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareKeyboardInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiSettings" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
	void Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareKeyboardInput_SetBit(void* Obj)
	{
		((UImGuiSettings*)Obj)->bShareKeyboardInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareKeyboardInput = { "bShareKeyboardInput", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UImGuiSettings), &Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareKeyboardInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareKeyboardInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareKeyboardInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareGamepadInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiSettings" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
	void Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareGamepadInput_SetBit(void* Obj)
	{
		((UImGuiSettings*)Obj)->bShareGamepadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareGamepadInput = { "bShareGamepadInput", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UImGuiSettings), &Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareGamepadInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareGamepadInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareGamepadInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareMouseInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiSettings" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
	void Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareMouseInput_SetBit(void* Obj)
	{
		((UImGuiSettings*)Obj)->bShareMouseInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareMouseInput = { "bShareMouseInput", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UImGuiSettings), &Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareMouseInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareMouseInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareMouseInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bUseSoftwareCursor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiSettings" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
	void Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bUseSoftwareCursor_SetBit(void* Obj)
	{
		((UImGuiSettings*)Obj)->bUseSoftwareCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bUseSoftwareCursor = { "bUseSoftwareCursor", nullptr, (EPropertyFlags)0x00200c0000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UImGuiSettings), &Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bUseSoftwareCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bUseSoftwareCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bUseSoftwareCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ToggleInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiSettings" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ToggleInput = { "ToggleInput", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImGuiSettings, ToggleInput), Z_Construct_UScriptStruct_FImGuiKeyInfo, METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ToggleInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ToggleInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiSettings" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImGuiSettings_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImGuiSettings, CanvasSize), Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo, METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiSettings_Statics::NewProp_DPIScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiSettings" },
		{ "ModuleRelativePath", "Public/ImGuiSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImGuiSettings_Statics::NewProp_DPIScale = { "DPIScale", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImGuiSettings, DPIScale), Z_Construct_UScriptStruct_FImGuiDPIScaleInfo, METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_DPIScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::NewProp_DPIScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImGuiSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ImGuiInputHandlerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareKeyboardInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareGamepadInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bShareMouseInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImGuiSettings_Statics::NewProp_bUseSoftwareCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImGuiSettings_Statics::NewProp_ToggleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImGuiSettings_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImGuiSettings_Statics::NewProp_DPIScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImGuiSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImGuiSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImGuiSettings_Statics::ClassParams = {
		&UImGuiSettings::StaticClass,
		"ImGui",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImGuiSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UImGuiSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImGuiSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImGuiSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImGuiSettings, 993377134);
	template<> IMGUI_API UClass* StaticClass<UImGuiSettings>()
	{
		return UImGuiSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImGuiSettings(Z_Construct_UClass_UImGuiSettings, &UImGuiSettings::StaticClass, TEXT("/Script/ImGui"), TEXT("UImGuiSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImGuiSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
