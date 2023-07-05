// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_SSSpectators.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_SSSpectators() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectators();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_SSSpectators::execSetVisibleState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSpectatorNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleState(Z_Param_InSpectatorNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSSpectators::execStopAllAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllAnim();
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_SSSpectators_ApplySpectators = FName(TEXT("ApplySpectators"));
	void UELSSWidgetHUD_SSSpectators::ApplySpectators(int32 InSpectatorNum)
	{
		ELSSWidgetHUD_SSSpectators_eventApplySpectators_Parms Parms;
		Parms.InSpectatorNum=InSpectatorNum;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectators_ApplySpectators),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_SSSpectators_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_SSSpectators::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSpectators_Init),NULL);
	}
	void UELSSWidgetHUD_SSSpectators::StaticRegisterNativesUELSSWidgetHUD_SSSpectators()
	{
		UClass* Class = UELSSWidgetHUD_SSSpectators::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVisibleState", &UELSSWidgetHUD_SSSpectators::execSetVisibleState },
			{ "StopAllAnim", &UELSSWidgetHUD_SSSpectators::execStopAllAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSpectatorNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::NewProp_InSpectatorNum = { "InSpectatorNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSSpectators_eventApplySpectators_Parms, InSpectatorNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::NewProp_InSpectatorNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectators, nullptr, "ApplySpectators", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSSpectators_eventApplySpectators_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectators, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics
	{
		struct ELSSWidgetHUD_SSSpectators_eventSetVisibleState_Parms
		{
			int32 InSpectatorNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSpectatorNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::NewProp_InSpectatorNum = { "InSpectatorNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSSpectators_eventSetVisibleState_Parms, InSpectatorNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::NewProp_InSpectatorNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectators, nullptr, "SetVisibleState", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSSpectators_eventSetVisibleState_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_StopAllAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_StopAllAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_StopAllAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSpectators, nullptr, "StopAllAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_StopAllAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_StopAllAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_StopAllAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_StopAllAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_NoRegister()
	{
		return UELSSWidgetHUD_SSSpectators::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOutAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOutAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorsNumberOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectatorsNumberOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowSpectatorsUI_MetaData[];
#endif
		static void NewProp_IsShowSpectatorsUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowSpectatorsUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_ApplySpectators, "ApplySpectators" }, // 2187542305
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_Init, "Init" }, // 2249874873
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_SetVisibleState, "SetVisibleState" }, // 1086915977
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSpectators_StopAllAnim, "StopAllAnim" }, // 2618510139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_SSSpectators.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSpectators" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayInAnim = { "PlayInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSpectators, PlayInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayOutAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSpectators" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayOutAnim = { "PlayOutAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSpectators, PlayOutAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_SpectatorsNumberOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSpectators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_SpectatorsNumberOverlay = { "SpectatorsNumberOverlay", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSpectators, SpectatorsNumberOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_SpectatorsNumberOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_SpectatorsNumberOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_IsShowSpectatorsUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSpectators" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSpectators.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_IsShowSpectatorsUI_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_SSSpectators*)Obj)->IsShowSpectatorsUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_IsShowSpectatorsUI = { "IsShowSpectatorsUI", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_SSSpectators), &Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_IsShowSpectatorsUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_IsShowSpectatorsUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_IsShowSpectatorsUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_PlayOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_SpectatorsNumberOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::NewProp_IsShowSpectatorsUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_SSSpectators>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::ClassParams = {
		&UELSSWidgetHUD_SSSpectators::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectators()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_SSSpectators, 980455694);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_SSSpectators>()
	{
		return UELSSWidgetHUD_SSSpectators::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_SSSpectators(Z_Construct_UClass_UELSSWidgetHUD_SSSpectators, &UELSSWidgetHUD_SSSpectators::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_SSSpectators"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_SSSpectators);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
