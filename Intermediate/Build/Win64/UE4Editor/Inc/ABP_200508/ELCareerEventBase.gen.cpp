// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerEventBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerEventBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerEventBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerEventBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventActionInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerAttireType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRingObject();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerEventBase::execChangeCameraPosition)
	{
		P_GET_STRUCT(FCareerEventActionInfo,Z_Param__Info);
		P_GET_PROPERTY(FIntProperty,Z_Param_CameraSwitchIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeCameraPosition(Z_Param__Info,Z_Param_CameraSwitchIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugAnimeSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAnimeSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugChangeCamera)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugChangeCamera(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugChangeMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugChangeMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugChangeWrestler)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugChangeWrestler(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputChangeAsset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputChangeAsset(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputDecision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputDecision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputForward(Z_Param_fAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputFov)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputFov(Z_Param_fAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputPitch(Z_Param_fAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputPress)
	{
		P_GET_UBOOL(Z_Param_bPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputPress(Z_Param_bPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputRight(Z_Param_fAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputUp(Z_Param_fAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugInputYaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInputYaw(Z_Param_fAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execDebugToggleAnimPlayStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugToggleAnimPlayStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execSetDataTable_EventCameraPosition)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_EventCameraPosition(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execSetupProp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupProp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execSetupRingObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupRingObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execSetupWrestler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWrestler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerEventBase::execSetWrestlerAnimation)
	{
		P_GET_STRUCT(FCareerEventActionInfo,Z_Param__Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerAnimation(Z_Param__Info);
		P_NATIVE_END;
	}
	static FName NAME_AELCareerEventBase_CreateEventProp = FName(TEXT("CreateEventProp"));
	AActor* AELCareerEventBase::CreateEventProp()
	{
		ELCareerEventBase_eventCreateEventProp_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerEventBase_CreateEventProp),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELCareerEventBase_CreateEventWrestler = FName(TEXT("CreateEventWrestler"));
	AActor* AELCareerEventBase::CreateEventWrestler(FTransform Transform, EWrestlerID_N WrestlerID, ECareerAttireType eAttire)
	{
		ELCareerEventBase_eventCreateEventWrestler_Parms Parms;
		Parms.Transform=Transform;
		Parms.WrestlerID=WrestlerID;
		Parms.eAttire=eAttire;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerEventBase_CreateEventWrestler),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELCareerEventBase_DispRingObject = FName(TEXT("DispRingObject"));
	void AELCareerEventBase::DispRingObject(ECareerRingObject eRingObject)
	{
		ELCareerEventBase_eventDispRingObject_Parms Parms;
		Parms.eRingObject=eRingObject;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerEventBase_DispRingObject),&Parms);
	}
	static FName NAME_AELCareerEventBase_GetCineCameraComponentFromIndex = FName(TEXT("GetCineCameraComponentFromIndex"));
	UCineCameraComponent* AELCareerEventBase::GetCineCameraComponentFromIndex(int32 Index)
	{
		ELCareerEventBase_eventGetCineCameraComponentFromIndex_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerEventBase_GetCineCameraComponentFromIndex),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELCareerEventBase_GetCurrentCineCameraComponent = FName(TEXT("GetCurrentCineCameraComponent"));
	UCineCameraComponent* AELCareerEventBase::GetCurrentCineCameraComponent()
	{
		ELCareerEventBase_eventGetCurrentCineCameraComponent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerEventBase_GetCurrentCineCameraComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELCareerEventBase_SwitchCameraBP = FName(TEXT("SwitchCameraBP"));
	void AELCareerEventBase::SwitchCameraBP(int32 Index)
	{
		ELCareerEventBase_eventSwitchCameraBP_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerEventBase_SwitchCameraBP),&Parms);
	}
	void AELCareerEventBase::StaticRegisterNativesAELCareerEventBase()
	{
		UClass* Class = AELCareerEventBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeCameraPosition", &AELCareerEventBase::execChangeCameraPosition },
			{ "DebugAnimeSetting", &AELCareerEventBase::execDebugAnimeSetting },
			{ "DebugChangeCamera", &AELCareerEventBase::execDebugChangeCamera },
			{ "DebugChangeMode", &AELCareerEventBase::execDebugChangeMode },
			{ "DebugChangeWrestler", &AELCareerEventBase::execDebugChangeWrestler },
			{ "DebugInputChangeAsset", &AELCareerEventBase::execDebugInputChangeAsset },
			{ "DebugInputDecision", &AELCareerEventBase::execDebugInputDecision },
			{ "DebugInputForward", &AELCareerEventBase::execDebugInputForward },
			{ "DebugInputFov", &AELCareerEventBase::execDebugInputFov },
			{ "DebugInputPitch", &AELCareerEventBase::execDebugInputPitch },
			{ "DebugInputPress", &AELCareerEventBase::execDebugInputPress },
			{ "DebugInputRight", &AELCareerEventBase::execDebugInputRight },
			{ "DebugInputUp", &AELCareerEventBase::execDebugInputUp },
			{ "DebugInputYaw", &AELCareerEventBase::execDebugInputYaw },
			{ "DebugSetting", &AELCareerEventBase::execDebugSetting },
			{ "DebugToggleAnimPlayStop", &AELCareerEventBase::execDebugToggleAnimPlayStop },
			{ "SetDataTable_EventCameraPosition", &AELCareerEventBase::execSetDataTable_EventCameraPosition },
			{ "SetupProp", &AELCareerEventBase::execSetupProp },
			{ "SetupRingObject", &AELCareerEventBase::execSetupRingObject },
			{ "SetupWrestler", &AELCareerEventBase::execSetupWrestler },
			{ "SetWrestlerAnimation", &AELCareerEventBase::execSetWrestlerAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics
	{
		struct ELCareerEventBase_eventChangeCameraPosition_Parms
		{
			FCareerEventActionInfo _Info;
			int32 CameraSwitchIndex;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Info;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraSwitchIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::NewProp__Info = { "_Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventChangeCameraPosition_Parms, _Info), Z_Construct_UScriptStruct_FCareerEventActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::NewProp_CameraSwitchIndex = { "CameraSwitchIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventChangeCameraPosition_Parms, CameraSwitchIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::NewProp__Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::NewProp_CameraSwitchIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "ChangeCameraPosition", nullptr, nullptr, sizeof(ELCareerEventBase_eventChangeCameraPosition_Parms), Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventCreateEventProp_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "CreateEventProp", nullptr, nullptr, sizeof(ELCareerEventBase_eventCreateEventProp_Parms), Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_CreateEventProp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_CreateEventProp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eAttire_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eAttire;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventCreateEventWrestler_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventCreateEventWrestler_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_eAttire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_eAttire = { "eAttire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventCreateEventWrestler_Parms, eAttire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventCreateEventWrestler_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_eAttire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_eAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "CreateEventWrestler", nullptr, nullptr, sizeof(ELCareerEventBase_eventCreateEventWrestler_Parms), Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugAnimeSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugAnimeSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugAnimeSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugAnimeSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugAnimeSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugAnimeSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugAnimeSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugAnimeSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics
	{
		struct ELCareerEventBase_eventDebugChangeCamera_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugChangeCamera_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugChangeCamera", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugChangeCamera_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugChangeMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugChangeMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugChangeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugChangeMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugChangeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugChangeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugChangeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugChangeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics
	{
		struct ELCareerEventBase_eventDebugChangeWrestler_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugChangeWrestler_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugChangeWrestler", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugChangeWrestler_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics
	{
		struct ELCareerEventBase_eventDebugInputChangeAsset_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugInputChangeAsset_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputChangeAsset", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugInputChangeAsset_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputDecision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputDecision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics
	{
		struct ELCareerEventBase_eventDebugInputForward_Parms
		{
			float fAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::NewProp_fAmount = { "fAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugInputForward_Parms, fAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::NewProp_fAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputForward", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugInputForward_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics
	{
		struct ELCareerEventBase_eventDebugInputFov_Parms
		{
			float fAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::NewProp_fAmount = { "fAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugInputFov_Parms, fAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::NewProp_fAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputFov", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugInputFov_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputFov()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputFov_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics
	{
		struct ELCareerEventBase_eventDebugInputPitch_Parms
		{
			float fAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::NewProp_fAmount = { "fAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugInputPitch_Parms, fAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::NewProp_fAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputPitch", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugInputPitch_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics
	{
		struct ELCareerEventBase_eventDebugInputPress_Parms
		{
			bool bPressed;
		};
		static void NewProp_bPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::NewProp_bPressed_SetBit(void* Obj)
	{
		((ELCareerEventBase_eventDebugInputPress_Parms*)Obj)->bPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::NewProp_bPressed = { "bPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerEventBase_eventDebugInputPress_Parms), &Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::NewProp_bPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::NewProp_bPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputPress", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugInputPress_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics
	{
		struct ELCareerEventBase_eventDebugInputRight_Parms
		{
			float fAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::NewProp_fAmount = { "fAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugInputRight_Parms, fAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::NewProp_fAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputRight", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugInputRight_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics
	{
		struct ELCareerEventBase_eventDebugInputUp_Parms
		{
			float fAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::NewProp_fAmount = { "fAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugInputUp_Parms, fAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::NewProp_fAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputUp", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugInputUp_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics
	{
		struct ELCareerEventBase_eventDebugInputYaw_Parms
		{
			float fAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::NewProp_fAmount = { "fAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDebugInputYaw_Parms, fAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::NewProp_fAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugInputYaw", nullptr, nullptr, sizeof(ELCareerEventBase_eventDebugInputYaw_Parms), Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DebugToggleAnimPlayStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DebugToggleAnimPlayStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DebugToggleAnimPlayStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DebugToggleAnimPlayStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DebugToggleAnimPlayStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DebugToggleAnimPlayStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DebugToggleAnimPlayStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DebugToggleAnimPlayStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRingObject_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRingObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::NewProp_eRingObject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::NewProp_eRingObject = { "eRingObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventDispRingObject_Parms, eRingObject), Z_Construct_UEnum_ABP_200508_ECareerRingObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::NewProp_eRingObject_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::NewProp_eRingObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "DispRingObject", nullptr, nullptr, sizeof(ELCareerEventBase_eventDispRingObject_Parms), Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_DispRingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_DispRingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventGetCineCameraComponentFromIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventGetCineCameraComponentFromIndex_Parms, ReturnValue), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "GetCineCameraComponentFromIndex", nullptr, nullptr, sizeof(ELCareerEventBase_eventGetCineCameraComponentFromIndex_Parms), Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventGetCurrentCineCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "GetCurrentCineCameraComponent", nullptr, nullptr, sizeof(ELCareerEventBase_eventGetCurrentCineCameraComponent_Parms), Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics
	{
		struct ELCareerEventBase_eventSetDataTable_EventCameraPosition_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventSetDataTable_EventCameraPosition_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "SetDataTable_EventCameraPosition", nullptr, nullptr, sizeof(ELCareerEventBase_eventSetDataTable_EventCameraPosition_Parms), Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_SetupProp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_SetupProp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_SetupProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "SetupProp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_SetupProp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SetupProp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_SetupProp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_SetupProp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_SetupRingObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_SetupRingObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_SetupRingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "SetupRingObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_SetupRingObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SetupRingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_SetupRingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_SetupRingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_SetupWrestler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_SetupWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_SetupWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "SetupWrestler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_SetupWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SetupWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_SetupWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_SetupWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics
	{
		struct ELCareerEventBase_eventSetWrestlerAnimation_Parms
		{
			FCareerEventActionInfo _Info;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::NewProp__Info = { "_Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventSetWrestlerAnimation_Parms, _Info), Z_Construct_UScriptStruct_FCareerEventActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::NewProp__Info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "SetWrestlerAnimation", nullptr, nullptr, sizeof(ELCareerEventBase_eventSetWrestlerAnimation_Parms), Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventBase_eventSwitchCameraBP_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerEventBase, nullptr, "SwitchCameraBP", nullptr, nullptr, sizeof(ELCareerEventBase_eventSwitchCameraBP_Parms), Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerEventBase_NoRegister()
	{
		return AELCareerEventBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerEventBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DefaultTargetPointList_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DefaultTargetPointList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DefaultTargetPointList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_DefaultTargetPointList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CharacterArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CharacterArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CharacterArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PropArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PropArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PropArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerEventBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerEventBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerEventBase_ChangeCameraPosition, "ChangeCameraPosition" }, // 3082260031
		{ &Z_Construct_UFunction_AELCareerEventBase_CreateEventProp, "CreateEventProp" }, // 1692866009
		{ &Z_Construct_UFunction_AELCareerEventBase_CreateEventWrestler, "CreateEventWrestler" }, // 1578837911
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugAnimeSetting, "DebugAnimeSetting" }, // 4094672496
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugChangeCamera, "DebugChangeCamera" }, // 1196070350
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugChangeMode, "DebugChangeMode" }, // 3643546990
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugChangeWrestler, "DebugChangeWrestler" }, // 203796616
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputChangeAsset, "DebugInputChangeAsset" }, // 4184039706
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputDecision, "DebugInputDecision" }, // 1210599237
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputForward, "DebugInputForward" }, // 3052581405
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputFov, "DebugInputFov" }, // 2828101619
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputPitch, "DebugInputPitch" }, // 3229267417
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputPress, "DebugInputPress" }, // 3431395643
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputRight, "DebugInputRight" }, // 2770870082
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputUp, "DebugInputUp" }, // 2916027699
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugInputYaw, "DebugInputYaw" }, // 543401509
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugSetting, "DebugSetting" }, // 2828718574
		{ &Z_Construct_UFunction_AELCareerEventBase_DebugToggleAnimPlayStop, "DebugToggleAnimPlayStop" }, // 1021675389
		{ &Z_Construct_UFunction_AELCareerEventBase_DispRingObject, "DispRingObject" }, // 770877420
		{ &Z_Construct_UFunction_AELCareerEventBase_GetCineCameraComponentFromIndex, "GetCineCameraComponentFromIndex" }, // 330329458
		{ &Z_Construct_UFunction_AELCareerEventBase_GetCurrentCineCameraComponent, "GetCurrentCineCameraComponent" }, // 3404214796
		{ &Z_Construct_UFunction_AELCareerEventBase_SetDataTable_EventCameraPosition, "SetDataTable_EventCameraPosition" }, // 651714701
		{ &Z_Construct_UFunction_AELCareerEventBase_SetupProp, "SetupProp" }, // 1785038731
		{ &Z_Construct_UFunction_AELCareerEventBase_SetupRingObject, "SetupRingObject" }, // 2971782490
		{ &Z_Construct_UFunction_AELCareerEventBase_SetupWrestler, "SetupWrestler" }, // 338649973
		{ &Z_Construct_UFunction_AELCareerEventBase_SetWrestlerAnimation, "SetWrestlerAnimation" }, // 4257200915
		{ &Z_Construct_UFunction_AELCareerEventBase_SwitchCameraBP, "SwitchCameraBP" }, // 3823797786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerEventBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerEventBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerEventBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList_Inner = { "m_DefaultTargetPointList", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerEventBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList = { "m_DefaultTargetPointList", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerEventBase, m_DefaultTargetPointList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_CharacterArray_Inner = { "m_CharacterArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_CharacterArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerEventBase" },
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_CharacterArray = { "m_CharacterArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerEventBase, m_CharacterArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_CharacterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_CharacterArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_PropArray_Inner = { "m_PropArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_PropArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerEventBase" },
		{ "ModuleRelativePath", "Public/ELCareerEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_PropArray = { "m_PropArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerEventBase, m_PropArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_PropArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_PropArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerEventBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_DefaultTargetPointList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_CharacterArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_CharacterArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_PropArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerEventBase_Statics::NewProp_m_PropArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerEventBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerEventBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerEventBase_Statics::ClassParams = {
		&AELCareerEventBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerEventBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerEventBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerEventBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerEventBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerEventBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerEventBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerEventBase, 2653565840);
	template<> ABP_200508_API UClass* StaticClass<AELCareerEventBase>()
	{
		return AELCareerEventBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerEventBase(Z_Construct_UClass_AELCareerEventBase, &AELCareerEventBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerEventBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerEventBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
