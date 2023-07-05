// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPanelOutGameGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPanelOutGameGroup() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelOutGameGroup_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelOutGameGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSPanelOutGameGroup::execEndPanelGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPanelGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameGroup::execGetActivePanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSPanelOutGameBase**)Z_Param__Result=P_THIS->GetActivePanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameGroup::execIsParentPanekInputEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsParentPanekInputEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameGroup::execIsSwapPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSwapPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameGroup::execOnSwapPanelEvent)
	{
		P_GET_ENUM(EOutGamePanelEventType,Z_Param_EventType);
		P_GET_OBJECT(UELSSPanelOutGameBase,Z_Param_callPanel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwapPanelEvent(EOutGamePanelEventType(Z_Param_EventType),Z_Param_callPanel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameGroup::execSelectActivePanelToListId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetID);
		P_GET_UBOOL(Z_Param_isSwapWait);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectActivePanelToListId(Z_Param_TargetID,Z_Param_isSwapWait);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameGroup::execSetupPanelGroup)
	{
		P_GET_TARRAY_REF(UELSSPanelOutGameBase*,Z_Param_Out_panels);
		P_GET_OBJECT(AELSSUIManagerBase,Z_Param_uiManager);
		P_GET_OBJECT(UUserWidget,Z_Param_commonWidget);
		P_GET_OBJECT(UUserWidget,Z_Param_movieWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPanelGroup(Z_Param_Out_panels,Z_Param_uiManager,Z_Param_commonWidget,Z_Param_movieWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelOutGameGroup::execSetVisibleGroupAll)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleGroupAll(Z_Param_IsOn);
		P_NATIVE_END;
	}
	void UELSSPanelOutGameGroup::StaticRegisterNativesUELSSPanelOutGameGroup()
	{
		UClass* Class = UELSSPanelOutGameGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPanelGroup", &UELSSPanelOutGameGroup::execEndPanelGroup },
			{ "GetActivePanel", &UELSSPanelOutGameGroup::execGetActivePanel },
			{ "IsParentPanekInputEnable", &UELSSPanelOutGameGroup::execIsParentPanekInputEnable },
			{ "IsSwapPanel", &UELSSPanelOutGameGroup::execIsSwapPanel },
			{ "OnSwapPanelEvent", &UELSSPanelOutGameGroup::execOnSwapPanelEvent },
			{ "SelectActivePanelToListId", &UELSSPanelOutGameGroup::execSelectActivePanelToListId },
			{ "SetupPanelGroup", &UELSSPanelOutGameGroup::execSetupPanelGroup },
			{ "SetVisibleGroupAll", &UELSSPanelOutGameGroup::execSetVisibleGroupAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameGroup_EndPanelGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_EndPanelGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameGroup_EndPanelGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameGroup, nullptr, "EndPanelGroup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_EndPanelGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_EndPanelGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameGroup_EndPanelGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameGroup_EndPanelGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics
	{
		struct ELSSPanelOutGameGroup_eventGetActivePanel_Parms
		{
			UELSSPanelOutGameBase* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameGroup_eventGetActivePanel_Parms, ReturnValue), Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameGroup, nullptr, "GetActivePanel", nullptr, nullptr, sizeof(ELSSPanelOutGameGroup_eventGetActivePanel_Parms), Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics
	{
		struct ELSSPanelOutGameGroup_eventIsParentPanekInputEnable_Parms
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
	void Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelOutGameGroup_eventIsParentPanekInputEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameGroup_eventIsParentPanekInputEnable_Parms), &Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameGroup, nullptr, "IsParentPanekInputEnable", nullptr, nullptr, sizeof(ELSSPanelOutGameGroup_eventIsParentPanekInputEnable_Parms), Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics
	{
		struct ELSSPanelOutGameGroup_eventIsSwapPanel_Parms
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
	void Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelOutGameGroup_eventIsSwapPanel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameGroup_eventIsSwapPanel_Parms), &Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameGroup, nullptr, "IsSwapPanel", nullptr, nullptr, sizeof(ELSSPanelOutGameGroup_eventIsSwapPanel_Parms), Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics
	{
		struct ELSSPanelOutGameGroup_eventOnSwapPanelEvent_Parms
		{
			EOutGamePanelEventType EventType;
			UELSSPanelOutGameBase* callPanel;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_callPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_EventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameGroup_eventOnSwapPanelEvent_Parms, EventType), Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_EventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_callPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_callPanel = { "callPanel", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameGroup_eventOnSwapPanelEvent_Parms, callPanel), Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_callPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_callPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::NewProp_callPanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameGroup, nullptr, "OnSwapPanelEvent", nullptr, nullptr, sizeof(ELSSPanelOutGameGroup_eventOnSwapPanelEvent_Parms), Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics
	{
		struct ELSSPanelOutGameGroup_eventSelectActivePanelToListId_Parms
		{
			int32 TargetID;
			bool isSwapWait;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetID;
		static void NewProp_isSwapWait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSwapWait;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_TargetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_TargetID = { "TargetID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameGroup_eventSelectActivePanelToListId_Parms, TargetID), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_TargetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_TargetID_MetaData)) };
	void Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_isSwapWait_SetBit(void* Obj)
	{
		((ELSSPanelOutGameGroup_eventSelectActivePanelToListId_Parms*)Obj)->isSwapWait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_isSwapWait = { "isSwapWait", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameGroup_eventSelectActivePanelToListId_Parms), &Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_isSwapWait_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelOutGameGroup_eventSelectActivePanelToListId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameGroup_eventSelectActivePanelToListId_Parms), &Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_TargetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_isSwapWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameGroup, nullptr, "SelectActivePanelToListId", nullptr, nullptr, sizeof(ELSSPanelOutGameGroup_eventSelectActivePanelToListId_Parms), Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics
	{
		struct ELSSPanelOutGameGroup_eventSetupPanelGroup_Parms
		{
			TArray<UELSSPanelOutGameBase*> panels;
			AELSSUIManagerBase* uiManager;
			UUserWidget* commonWidget;
			UUserWidget* movieWidget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_panels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_panels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_panels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_uiManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_commonWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_commonWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movieWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movieWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_panels_Inner = { "panels", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_panels_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_panels = { "panels", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameGroup_eventSetupPanelGroup_Parms, panels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_panels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_panels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_uiManager = { "uiManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameGroup_eventSetupPanelGroup_Parms, uiManager), Z_Construct_UClass_AELSSUIManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_commonWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_commonWidget = { "commonWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameGroup_eventSetupPanelGroup_Parms, commonWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_commonWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_commonWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_movieWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_movieWidget = { "movieWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelOutGameGroup_eventSetupPanelGroup_Parms, movieWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_movieWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_movieWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_panels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_panels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_uiManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_commonWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::NewProp_movieWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameGroup, nullptr, "SetupPanelGroup", nullptr, nullptr, sizeof(ELSSPanelOutGameGroup_eventSetupPanelGroup_Parms), Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics
	{
		struct ELSSPanelOutGameGroup_eventSetVisibleGroupAll_Parms
		{
			bool IsOn;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOn_MetaData[];
#endif
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::NewProp_IsOn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPanelOutGameGroup_eventSetVisibleGroupAll_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelOutGameGroup_eventSetVisibleGroupAll_Parms), &Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::NewProp_IsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::NewProp_IsOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelOutGameGroup, nullptr, "SetVisibleGroupAll", nullptr, nullptr, sizeof(ELSSPanelOutGameGroup_eventSetVisibleGroupAll_Parms), Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSPanelOutGameGroup_NoRegister()
	{
		return UELSSPanelOutGameGroup::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPanelOutGameGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grpOutGamePaneList_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grpOutGamePaneList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grpOutGamePaneList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_grpOutGamePaneList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grpActivePanelNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grpActivePanelNow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grpActivePanelPrev_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grpActivePanelPrev;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSPanelOutGameGroup_EndPanelGroup, "EndPanelGroup" }, // 3485235046
		{ &Z_Construct_UFunction_UELSSPanelOutGameGroup_GetActivePanel, "GetActivePanel" }, // 3482367151
		{ &Z_Construct_UFunction_UELSSPanelOutGameGroup_IsParentPanekInputEnable, "IsParentPanekInputEnable" }, // 2670705927
		{ &Z_Construct_UFunction_UELSSPanelOutGameGroup_IsSwapPanel, "IsSwapPanel" }, // 2426999734
		{ &Z_Construct_UFunction_UELSSPanelOutGameGroup_OnSwapPanelEvent, "OnSwapPanelEvent" }, // 955720229
		{ &Z_Construct_UFunction_UELSSPanelOutGameGroup_SelectActivePanelToListId, "SelectActivePanelToListId" }, // 953386375
		{ &Z_Construct_UFunction_UELSSPanelOutGameGroup_SetupPanelGroup, "SetupPanelGroup" }, // 1370987043
		{ &Z_Construct_UFunction_UELSSPanelOutGameGroup_SetVisibleGroupAll, "SetVisibleGroupAll" }, // 584480132
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPanelOutGameGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList_Inner = { "grpOutGamePaneList", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList = { "grpOutGamePaneList", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelOutGameGroup, grpOutGamePaneList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelNow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelNow = { "grpActivePanelNow", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelOutGameGroup, grpActivePanelNow), Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelNow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelPrev_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelOutGameGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelOutGameGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelPrev = { "grpActivePanelPrev", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelOutGameGroup, grpActivePanelPrev), Z_Construct_UClass_UELSSPanelOutGameBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelPrev_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelPrev_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpOutGamePaneList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::NewProp_grpActivePanelPrev,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSPanelOutGameGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::ClassParams = {
		&UELSSPanelOutGameGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPanelOutGameGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPanelOutGameGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPanelOutGameGroup, 3952993104);
	template<> ABP_200508_API UClass* StaticClass<UELSSPanelOutGameGroup>()
	{
		return UELSSPanelOutGameGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPanelOutGameGroup(Z_Construct_UClass_UELSSPanelOutGameGroup, &UELSSPanelOutGameGroup::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPanelOutGameGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPanelOutGameGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
