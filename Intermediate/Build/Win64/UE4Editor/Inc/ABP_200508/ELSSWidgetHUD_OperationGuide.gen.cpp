// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_OperationGuide.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_OperationGuide() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OperationGuide();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSOperationGuideExecute();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_OperationGuide::execSetGuideFontAndButtonVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InVisibleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGuideFontAndButtonVisible(Z_Param_InVisibleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OperationGuide::execSetOperationGuideType)
	{
		P_GET_ENUM(ESSOperationGuideExecute,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOperationGuideType(ESSOperationGuideExecute(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OperationGuide::execUpdateOperationGuide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOperationGuide();
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_OperationGuide_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_OperationGuide::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OperationGuide_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_OperationGuide_SetGuardState = FName(TEXT("SetGuardState"));
	void UELSSWidgetHUD_OperationGuide::SetGuardState(bool InIsGuard)
	{
		ELSSWidgetHUD_OperationGuide_eventSetGuardState_Parms Parms;
		Parms.InIsGuard=InIsGuard ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OperationGuide_SetGuardState),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_OperationGuide_SetGuideFont = FName(TEXT("SetGuideFont"));
	void UELSSWidgetHUD_OperationGuide::SetGuideFont(ESSOperationGuideExecute InType)
	{
		ELSSWidgetHUD_OperationGuide_eventSetGuideFont_Parms Parms;
		Parms.InType=InType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OperationGuide_SetGuideFont),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_OperationGuide_SetInteractMode = FName(TEXT("SetInteractMode"));
	void UELSSWidgetHUD_OperationGuide::SetInteractMode(bool InInteractMode)
	{
		ELSSWidgetHUD_OperationGuide_eventSetInteractMode_Parms Parms;
		Parms.InInteractMode=InInteractMode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OperationGuide_SetInteractMode),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_OperationGuide_SetKeyConfig = FName(TEXT("SetKeyConfig"));
	void UELSSWidgetHUD_OperationGuide::SetKeyConfig(EKeyMappingType InKeyMapType, const FName InMapName)
	{
		ELSSWidgetHUD_OperationGuide_eventSetKeyConfig_Parms Parms;
		Parms.InKeyMapType=InKeyMapType;
		Parms.InMapName=InMapName;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OperationGuide_SetKeyConfig),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_OperationGuide_SetupFontAndButton = FName(TEXT("SetupFontAndButton"));
	void UELSSWidgetHUD_OperationGuide::SetupFontAndButton()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_OperationGuide_SetupFontAndButton),NULL);
	}
	void UELSSWidgetHUD_OperationGuide::StaticRegisterNativesUELSSWidgetHUD_OperationGuide()
	{
		UClass* Class = UELSSWidgetHUD_OperationGuide::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGuideFontAndButtonVisible", &UELSSWidgetHUD_OperationGuide::execSetGuideFontAndButtonVisible },
			{ "SetOperationGuideType", &UELSSWidgetHUD_OperationGuide::execSetOperationGuideType },
			{ "UpdateOperationGuide", &UELSSWidgetHUD_OperationGuide::execUpdateOperationGuide },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics
	{
		static void NewProp_InIsGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsGuard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::NewProp_InIsGuard_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OperationGuide_eventSetGuardState_Parms*)Obj)->InIsGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::NewProp_InIsGuard = { "InIsGuard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OperationGuide_eventSetGuardState_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::NewProp_InIsGuard_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::NewProp_InIsGuard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "SetGuardState", nullptr, nullptr, sizeof(ELSSWidgetHUD_OperationGuide_eventSetGuardState_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OperationGuide_eventSetGuideFont_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSOperationGuideExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "SetGuideFont", nullptr, nullptr, sizeof(ELSSWidgetHUD_OperationGuide_eventSetGuideFont_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics
	{
		struct ELSSWidgetHUD_OperationGuide_eventSetGuideFontAndButtonVisible_Parms
		{
			int32 InVisibleIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InVisibleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::NewProp_InVisibleIndex = { "InVisibleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OperationGuide_eventSetGuideFontAndButtonVisible_Parms, InVisibleIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::NewProp_InVisibleIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "SetGuideFontAndButtonVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_OperationGuide_eventSetGuideFontAndButtonVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics
	{
		static void NewProp_InInteractMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InInteractMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::NewProp_InInteractMode_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OperationGuide_eventSetInteractMode_Parms*)Obj)->InInteractMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::NewProp_InInteractMode = { "InInteractMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OperationGuide_eventSetInteractMode_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::NewProp_InInteractMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::NewProp_InInteractMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "SetInteractMode", nullptr, nullptr, sizeof(ELSSWidgetHUD_OperationGuide_eventSetInteractMode_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InMapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OperationGuide_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InMapName = { "InMapName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OperationGuide_eventSetKeyConfig_Parms, InMapName), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InMapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InKeyMapType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::NewProp_InMapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_OperationGuide_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics
	{
		struct ELSSWidgetHUD_OperationGuide_eventSetOperationGuideType_Parms
		{
			ESSOperationGuideExecute InType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OperationGuide_eventSetOperationGuideType_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSOperationGuideExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "SetOperationGuideType", nullptr, nullptr, sizeof(ELSSWidgetHUD_OperationGuide_eventSetOperationGuideType_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetupFontAndButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetupFontAndButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetupFontAndButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "SetupFontAndButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetupFontAndButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetupFontAndButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetupFontAndButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetupFontAndButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_UpdateOperationGuide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_UpdateOperationGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_UpdateOperationGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, nullptr, "UpdateOperationGuide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_UpdateOperationGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_UpdateOperationGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_UpdateOperationGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_UpdateOperationGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_NoRegister()
	{
		return UELSSWidgetHUD_OperationGuide::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ButtonArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NowOperationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowOperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NowOperationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGuradState_MetaData[];
#endif
		static void NewProp_IsGuradState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGuradState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInteractMode_MetaData[];
#endif
		static void NewProp_IsInteractMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInteractMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_Init, "Init" }, // 3356774619
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuardState, "SetGuardState" }, // 3224696825
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFont, "SetGuideFont" }, // 3606426895
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetGuideFontAndButtonVisible, "SetGuideFontAndButtonVisible" }, // 991992739
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetInteractMode, "SetInteractMode" }, // 409723736
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetKeyConfig, "SetKeyConfig" }, // 1119522797
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetOperationGuideType, "SetOperationGuideType" }, // 1680791913
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_SetupFontAndButton, "SetupFontAndButton" }, // 3459627698
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OperationGuide_UpdateOperationGuide, "UpdateOperationGuide" }, // 2643592090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_OperationGuide.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OperationGuide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray_Inner = { "FontArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OperationGuide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray = { "FontArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OperationGuide, FontArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OperationGuide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray_Inner = { "ButtonArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OperationGuide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray = { "ButtonArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OperationGuide, ButtonArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_NowOperationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_NowOperationType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OperationGuide" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_NowOperationType = { "NowOperationType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OperationGuide, NowOperationType), Z_Construct_UEnum_ABP_200508_ESSOperationGuideExecute, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_NowOperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_NowOperationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsGuradState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OperationGuide" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsGuradState_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_OperationGuide*)Obj)->IsGuradState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsGuradState = { "IsGuradState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_OperationGuide), &Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsGuradState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsGuradState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsGuradState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsInteractMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OperationGuide" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OperationGuide.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsInteractMode_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_OperationGuide*)Obj)->IsInteractMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsInteractMode = { "IsInteractMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_OperationGuide), &Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsInteractMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsInteractMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsInteractMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_FontArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_ButtonArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_NowOperationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_NowOperationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsGuradState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::NewProp_IsInteractMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_OperationGuide>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::ClassParams = {
		&UELSSWidgetHUD_OperationGuide::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_OperationGuide()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_OperationGuide, 4250097232);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_OperationGuide>()
	{
		return UELSSWidgetHUD_OperationGuide::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_OperationGuide(Z_Construct_UClass_UELSSWidgetHUD_OperationGuide, &UELSSWidgetHUD_OperationGuide::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_OperationGuide"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_OperationGuide);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
