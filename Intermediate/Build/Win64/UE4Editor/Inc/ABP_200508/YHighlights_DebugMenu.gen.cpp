// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YHighlights_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYHighlights_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYHighlights_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYHighlights_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UYHighlights_DebugMenu::execIsStartCaptureVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStartCaptureVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYHighlights_DebugMenu::execSetStartCaptureVideo)
	{
		P_GET_UBOOL(Z_Param__bHilights);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartCaptureVideo(Z_Param__bHilights);
		P_NATIVE_END;
	}
	void UYHighlights_DebugMenu::StaticRegisterNativesUYHighlights_DebugMenu()
	{
		UClass* Class = UYHighlights_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsStartCaptureVideo", &UYHighlights_DebugMenu::execIsStartCaptureVideo },
			{ "SetStartCaptureVideo", &UYHighlights_DebugMenu::execSetStartCaptureVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics
	{
		struct YHighlights_DebugMenu_eventIsStartCaptureVideo_Parms
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
	void Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YHighlights_DebugMenu_eventIsStartCaptureVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YHighlights_DebugMenu_eventIsStartCaptureVideo_Parms), &Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YHighlights_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYHighlights_DebugMenu, nullptr, "IsStartCaptureVideo", nullptr, nullptr, sizeof(YHighlights_DebugMenu_eventIsStartCaptureVideo_Parms), Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics
	{
		struct YHighlights_DebugMenu_eventSetStartCaptureVideo_Parms
		{
			bool _bHilights;
		};
		static void NewProp__bHilights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bHilights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::NewProp__bHilights_SetBit(void* Obj)
	{
		((YHighlights_DebugMenu_eventSetStartCaptureVideo_Parms*)Obj)->_bHilights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::NewProp__bHilights = { "_bHilights", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YHighlights_DebugMenu_eventSetStartCaptureVideo_Parms), &Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::NewProp__bHilights_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::NewProp__bHilights,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YHighlights_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYHighlights_DebugMenu, nullptr, "SetStartCaptureVideo", nullptr, nullptr, sizeof(YHighlights_DebugMenu_eventSetStartCaptureVideo_Parms), Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYHighlights_DebugMenu_NoRegister()
	{
		return UYHighlights_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYHighlights_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYHighlights_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYHighlights_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYHighlights_DebugMenu_IsStartCaptureVideo, "IsStartCaptureVideo" }, // 2197571683
		{ &Z_Construct_UFunction_UYHighlights_DebugMenu_SetStartCaptureVideo, "SetStartCaptureVideo" }, // 1474414492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYHighlights_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YHighlights_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YHighlights_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYHighlights_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYHighlights_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYHighlights_DebugMenu_Statics::ClassParams = {
		&UYHighlights_DebugMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYHighlights_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYHighlights_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYHighlights_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYHighlights_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYHighlights_DebugMenu, 4060099946);
	template<> ABP_200508_API UClass* StaticClass<UYHighlights_DebugMenu>()
	{
		return UYHighlights_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYHighlights_DebugMenu(Z_Construct_UClass_UYHighlights_DebugMenu, &UYHighlights_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYHighlights_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYHighlights_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif