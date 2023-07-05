// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELInGameMenuInputEventActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELInGameMenuInputEventActor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELInGameMenuInputEventActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELInGameMenuInputEventActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELInGamePlayerControllerBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnInputKey();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FyMenuInputParam();
// End Cross Module References
	DEFINE_FUNCTION(AELInGameMenuInputEventActor::execBindInputEvent)
	{
		P_GET_OBJECT(AELInGamePlayerControllerBase,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BindInputEvent(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELInGameMenuInputEventActor::execBindInputEventAllControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BindInputEventAllControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELInGameMenuInputEventActor::execBindInputEventOtherController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BindInputEventOtherController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELInGameMenuInputEventActor::execInputEvent)
	{
		P_GET_ENUM(yEnInputKey,Z_Param_InputKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent(yEnInputKey(Z_Param_InputKey),EInputEvent(Z_Param_KeyEvent),Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELInGameMenuInputEventActor::execInputEvent_AnyKey)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputEvent_AnyKey(EInputEvent(Z_Param_KeyEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELInGameMenuInputEventActor::execSetDefaultBindingControllerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultBindingControllerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELInGameMenuInputEventActor::execUnbindInputEventAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindInputEventAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELInGameMenuInputEventActor::execUnBindInputEventOtherController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnBindInputEventOtherController();
		P_NATIVE_END;
	}
	void AELInGameMenuInputEventActor::StaticRegisterNativesAELInGameMenuInputEventActor()
	{
		UClass* Class = AELInGameMenuInputEventActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindInputEvent", &AELInGameMenuInputEventActor::execBindInputEvent },
			{ "BindInputEventAllControllers", &AELInGameMenuInputEventActor::execBindInputEventAllControllers },
			{ "BindInputEventOtherController", &AELInGameMenuInputEventActor::execBindInputEventOtherController },
			{ "InputEvent", &AELInGameMenuInputEventActor::execInputEvent },
			{ "InputEvent_AnyKey", &AELInGameMenuInputEventActor::execInputEvent_AnyKey },
			{ "SetDefaultBindingControllerID", &AELInGameMenuInputEventActor::execSetDefaultBindingControllerID },
			{ "UnbindInputEventAll", &AELInGameMenuInputEventActor::execUnbindInputEventAll },
			{ "UnBindInputEventOtherController", &AELInGameMenuInputEventActor::execUnBindInputEventOtherController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics
	{
		struct ELInGameMenuInputEventActor_eventBindInputEvent_Parms
		{
			AELInGamePlayerControllerBase* PlayerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventActor_eventBindInputEvent_Parms, PlayerController), Z_Construct_UClass_AELInGamePlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInGameMenuInputEventActor_eventBindInputEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInGameMenuInputEventActor_eventBindInputEvent_Parms), &Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGameMenuInputEventActor, nullptr, "BindInputEvent", nullptr, nullptr, sizeof(ELInGameMenuInputEventActor_eventBindInputEvent_Parms), Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics
	{
		struct ELInGameMenuInputEventActor_eventBindInputEventAllControllers_Parms
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
	void Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInGameMenuInputEventActor_eventBindInputEventAllControllers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInGameMenuInputEventActor_eventBindInputEventAllControllers_Parms), &Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGameMenuInputEventActor, nullptr, "BindInputEventAllControllers", nullptr, nullptr, sizeof(ELInGameMenuInputEventActor_eventBindInputEventAllControllers_Parms), Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics
	{
		struct ELInGameMenuInputEventActor_eventBindInputEventOtherController_Parms
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
	void Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELInGameMenuInputEventActor_eventBindInputEventOtherController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELInGameMenuInputEventActor_eventBindInputEventOtherController_Parms), &Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGameMenuInputEventActor, nullptr, "BindInputEventOtherController", nullptr, nullptr, sizeof(ELInGameMenuInputEventActor_eventBindInputEventOtherController_Parms), Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics
	{
		struct ELInGameMenuInputEventActor_eventInputEvent_Parms
		{
			yEnInputKey InputKey;
			TEnumAsByte<EInputEvent> KeyEvent;
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InputKey_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::NewProp_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventActor_eventInputEvent_Parms, InputKey), Z_Construct_UEnum_ABP_200508_yEnInputKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventActor_eventInputEvent_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventActor_eventInputEvent_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::NewProp_InputKey_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGameMenuInputEventActor, nullptr, "InputEvent", nullptr, nullptr, sizeof(ELInGameMenuInputEventActor_eventInputEvent_Parms), Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics
	{
		struct ELInGameMenuInputEventActor_eventInputEvent_AnyKey_Parms
		{
			TEnumAsByte<EInputEvent> KeyEvent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELInGameMenuInputEventActor_eventInputEvent_AnyKey_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::NewProp_KeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGameMenuInputEventActor, nullptr, "InputEvent_AnyKey", nullptr, nullptr, sizeof(ELInGameMenuInputEventActor_eventInputEvent_AnyKey_Parms), Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGameMenuInputEventActor_SetDefaultBindingControllerID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGameMenuInputEventActor_SetDefaultBindingControllerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGameMenuInputEventActor_SetDefaultBindingControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGameMenuInputEventActor, nullptr, "SetDefaultBindingControllerID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGameMenuInputEventActor_SetDefaultBindingControllerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_SetDefaultBindingControllerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGameMenuInputEventActor_SetDefaultBindingControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGameMenuInputEventActor_SetDefaultBindingControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGameMenuInputEventActor_UnbindInputEventAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGameMenuInputEventActor_UnbindInputEventAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGameMenuInputEventActor_UnbindInputEventAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGameMenuInputEventActor, nullptr, "UnbindInputEventAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGameMenuInputEventActor_UnbindInputEventAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_UnbindInputEventAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGameMenuInputEventActor_UnbindInputEventAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGameMenuInputEventActor_UnbindInputEventAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGameMenuInputEventActor_UnBindInputEventOtherController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGameMenuInputEventActor_UnBindInputEventOtherController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGameMenuInputEventActor_UnBindInputEventOtherController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGameMenuInputEventActor, nullptr, "UnBindInputEventOtherController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGameMenuInputEventActor_UnBindInputEventOtherController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGameMenuInputEventActor_UnBindInputEventOtherController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGameMenuInputEventActor_UnBindInputEventOtherController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGameMenuInputEventActor_UnBindInputEventOtherController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELInGameMenuInputEventActor_NoRegister()
	{
		return AELInGameMenuInputEventActor::StaticClass();
	}
	struct Z_Construct_UClass_AELInGameMenuInputEventActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMenuInputParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultMenuInputParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEvent, "BindInputEvent" }, // 1735594252
		{ &Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventAllControllers, "BindInputEventAllControllers" }, // 3382841484
		{ &Z_Construct_UFunction_AELInGameMenuInputEventActor_BindInputEventOtherController, "BindInputEventOtherController" }, // 2581723508
		{ &Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent, "InputEvent" }, // 3631183717
		{ &Z_Construct_UFunction_AELInGameMenuInputEventActor_InputEvent_AnyKey, "InputEvent_AnyKey" }, // 4193081121
		{ &Z_Construct_UFunction_AELInGameMenuInputEventActor_SetDefaultBindingControllerID, "SetDefaultBindingControllerID" }, // 311133888
		{ &Z_Construct_UFunction_AELInGameMenuInputEventActor_UnbindInputEventAll, "UnbindInputEventAll" }, // 2745982577
		{ &Z_Construct_UFunction_AELInGameMenuInputEventActor_UnBindInputEventOtherController, "UnBindInputEventOtherController" }, // 3089461679
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELInGameMenuInputEventActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::NewProp_DefaultMenuInputParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInGameMenuInputEventActor" },
		{ "ModuleRelativePath", "Public/ELInGameMenuInputEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::NewProp_DefaultMenuInputParam = { "DefaultMenuInputParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELInGameMenuInputEventActor, DefaultMenuInputParam), Z_Construct_UScriptStruct_FyMenuInputParam, METADATA_PARAMS(Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::NewProp_DefaultMenuInputParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::NewProp_DefaultMenuInputParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::NewProp_DefaultMenuInputParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELInGameMenuInputEventActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::ClassParams = {
		&AELInGameMenuInputEventActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELInGameMenuInputEventActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELInGameMenuInputEventActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELInGameMenuInputEventActor, 442856836);
	template<> ABP_200508_API UClass* StaticClass<AELInGameMenuInputEventActor>()
	{
		return AELInGameMenuInputEventActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELInGameMenuInputEventActor(Z_Construct_UClass_AELInGameMenuInputEventActor, &AELInGameMenuInputEventActor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELInGameMenuInputEventActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELInGameMenuInputEventActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
