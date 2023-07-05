// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSUIManagerOutGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSUIManagerOutGame() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerOutGame_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerOutGame();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType();
	ABP_200508_API UClass* Z_Construct_UClass_UELOperationalWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USSMenuWrestlerSelectData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSUIManagerOutGame::execPlaySoundToSE)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_seName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlaySoundToSE(Z_Param_seName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerOutGame::execRemoveWidgetManagerWidget)
	{
		P_GET_ENUM(yEnMenuWidgetType,Z_Param_addType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidgetManagerWidget(yEnMenuWidgetType(Z_Param_addType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerOutGame::execSetOutGameWidgetManager)
	{
		P_GET_ENUM(yEnMenuWidgetType,Z_Param_addType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOutGameWidgetManager(yEnMenuWidgetType(Z_Param_addType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerOutGame::execSetupOutGameUI)
	{
		P_GET_OBJECT(UELOperationalWidgetBase,Z_Param_mainWidget);
		P_GET_ENUM(yEnMenuWidgetType,Z_Param_addType);
		P_GET_UBOOL(Z_Param_isCurrentUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupOutGameUI(Z_Param_mainWidget,yEnMenuWidgetType(Z_Param_addType),Z_Param_isCurrentUI);
		P_NATIVE_END;
	}
	void AELSSUIManagerOutGame::StaticRegisterNativesAELSSUIManagerOutGame()
	{
		UClass* Class = AELSSUIManagerOutGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlaySoundToSE", &AELSSUIManagerOutGame::execPlaySoundToSE },
			{ "RemoveWidgetManagerWidget", &AELSSUIManagerOutGame::execRemoveWidgetManagerWidget },
			{ "SetOutGameWidgetManager", &AELSSUIManagerOutGame::execSetOutGameWidgetManager },
			{ "SetupOutGameUI", &AELSSUIManagerOutGame::execSetupOutGameUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics
	{
		struct ELSSUIManagerOutGame_eventPlaySoundToSE_Parms
		{
			FString seName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_seName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_seName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_seName = { "seName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerOutGame_eventPlaySoundToSE_Parms, seName), METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_seName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_seName_MetaData)) };
	void Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUIManagerOutGame_eventPlaySoundToSE_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerOutGame_eventPlaySoundToSE_Parms), &Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_seName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerOutGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerOutGame, nullptr, "PlaySoundToSE", nullptr, nullptr, sizeof(ELSSUIManagerOutGame_eventPlaySoundToSE_Parms), Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics
	{
		struct ELSSUIManagerOutGame_eventRemoveWidgetManagerWidget_Parms
		{
			yEnMenuWidgetType addType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_addType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_addType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::NewProp_addType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::NewProp_addType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::NewProp_addType = { "addType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerOutGame_eventRemoveWidgetManagerWidget_Parms, addType), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::NewProp_addType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::NewProp_addType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::NewProp_addType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::NewProp_addType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerOutGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerOutGame, nullptr, "RemoveWidgetManagerWidget", nullptr, nullptr, sizeof(ELSSUIManagerOutGame_eventRemoveWidgetManagerWidget_Parms), Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics
	{
		struct ELSSUIManagerOutGame_eventSetOutGameWidgetManager_Parms
		{
			yEnMenuWidgetType addType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_addType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_addType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_addType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_addType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_addType = { "addType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerOutGame_eventSetOutGameWidgetManager_Parms, addType), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_addType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_addType_MetaData)) };
	void Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUIManagerOutGame_eventSetOutGameWidgetManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerOutGame_eventSetOutGameWidgetManager_Parms), &Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_addType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_addType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerOutGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerOutGame, nullptr, "SetOutGameWidgetManager", nullptr, nullptr, sizeof(ELSSUIManagerOutGame_eventSetOutGameWidgetManager_Parms), Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics
	{
		struct ELSSUIManagerOutGame_eventSetupOutGameUI_Parms
		{
			UELOperationalWidgetBase* mainWidget;
			yEnMenuWidgetType addType;
			bool isCurrentUI;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainWidget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_addType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_addType;
		static void NewProp_isCurrentUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCurrentUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_mainWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_mainWidget = { "mainWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerOutGame_eventSetupOutGameUI_Parms, mainWidget), Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_mainWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_mainWidget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_addType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_addType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_addType = { "addType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerOutGame_eventSetupOutGameUI_Parms, addType), Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_addType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_addType_MetaData)) };
	void Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_isCurrentUI_SetBit(void* Obj)
	{
		((ELSSUIManagerOutGame_eventSetupOutGameUI_Parms*)Obj)->isCurrentUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_isCurrentUI = { "isCurrentUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerOutGame_eventSetupOutGameUI_Parms), &Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_isCurrentUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUIManagerOutGame_eventSetupOutGameUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerOutGame_eventSetupOutGameUI_Parms), &Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_mainWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_addType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_addType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_isCurrentUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerOutGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerOutGame, nullptr, "SetupOutGameUI", nullptr, nullptr, sizeof(ELSSUIManagerOutGame_eventSetupOutGameUI_Parms), Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSUIManagerOutGame_NoRegister()
	{
		return AELSSUIManagerOutGame::StaticClass();
	}
	struct Z_Construct_UClass_AELSSUIManagerOutGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectWrestlerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectWrestlerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSUIManagerOutGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSUIManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSUIManagerOutGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSUIManagerOutGame_PlaySoundToSE, "PlaySoundToSE" }, // 233503580
		{ &Z_Construct_UFunction_AELSSUIManagerOutGame_RemoveWidgetManagerWidget, "RemoveWidgetManagerWidget" }, // 3801922422
		{ &Z_Construct_UFunction_AELSSUIManagerOutGame_SetOutGameWidgetManager, "SetOutGameWidgetManager" }, // 2735403400
		{ &Z_Construct_UFunction_AELSSUIManagerOutGame_SetupOutGameUI, "SetupOutGameUI" }, // 208634016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerOutGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSUIManagerOutGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerOutGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_mainPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUIManagerOutGame" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerOutGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_mainPanel = { "mainPanel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSUIManagerOutGame, mainPanel), Z_Construct_UClass_UELSSPanelBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_mainPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_mainPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_selectWrestlerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUIManagerOutGame" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerOutGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_selectWrestlerData = { "selectWrestlerData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSUIManagerOutGame, selectWrestlerData), Z_Construct_UClass_USSMenuWrestlerSelectData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_selectWrestlerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_selectWrestlerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSUIManagerOutGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_mainPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSUIManagerOutGame_Statics::NewProp_selectWrestlerData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSUIManagerOutGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSUIManagerOutGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSUIManagerOutGame_Statics::ClassParams = {
		&AELSSUIManagerOutGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSUIManagerOutGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerOutGame_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerOutGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerOutGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSUIManagerOutGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSUIManagerOutGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSUIManagerOutGame, 1473038890);
	template<> ABP_200508_API UClass* StaticClass<AELSSUIManagerOutGame>()
	{
		return AELSSUIManagerOutGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSUIManagerOutGame(Z_Construct_UClass_AELSSUIManagerOutGame, &AELSSUIManagerOutGame::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSUIManagerOutGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSUIManagerOutGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
