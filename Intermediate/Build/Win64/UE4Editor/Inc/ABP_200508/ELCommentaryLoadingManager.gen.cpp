// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCommentaryLoadingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCommentaryLoadingManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCommentaryLoadingManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCommentaryLoadingManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CommentaryLoadingCompleteDelegate__DelegateSignature();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Ref();
	ABP_200508_API UClass* Z_Construct_UClass_AELCommentaryLoadingExecutorBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCommentaryLoadingManager::execDebug_StartSelectedScreen)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param__completeDelegate);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Debug_StartSelectedScreen(FCommentaryLoadingCompleteDelegate(Z_Param__completeDelegate),Z_Param__targetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommentaryLoadingManager::execEndScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommentaryLoadingManager::execOnCompleteLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleteLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommentaryLoadingManager::execSetReserveFightWrestlerIDs)
	{
		P_GET_TARRAY(EWrestlerID_N,Z_Param__targetWrestlerIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReserveFightWrestlerIDs(Z_Param__targetWrestlerIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommentaryLoadingManager::execStartScreen)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param__completeDelegate);
		P_GET_PROPERTY(FIntProperty,Z_Param_BaseZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartScreen(FCommentaryLoadingCompleteDelegate(Z_Param__completeDelegate),Z_Param_BaseZOrder);
		P_NATIVE_END;
	}
	void UELCommentaryLoadingManager::StaticRegisterNativesUELCommentaryLoadingManager()
	{
		UClass* Class = UELCommentaryLoadingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Debug_StartSelectedScreen", &UELCommentaryLoadingManager::execDebug_StartSelectedScreen },
			{ "EndScreen", &UELCommentaryLoadingManager::execEndScreen },
			{ "OnCompleteLoading", &UELCommentaryLoadingManager::execOnCompleteLoading },
			{ "SetReserveFightWrestlerIDs", &UELCommentaryLoadingManager::execSetReserveFightWrestlerIDs },
			{ "StartScreen", &UELCommentaryLoadingManager::execStartScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics
	{
		struct ELCommentaryLoadingManager_eventDebug_StartSelectedScreen_Parms
		{
			FScriptDelegate _completeDelegate;
			int32 _targetIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__completeDelegate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::NewProp__completeDelegate = { "_completeDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommentaryLoadingManager_eventDebug_StartSelectedScreen_Parms, _completeDelegate), Z_Construct_UDelegateFunction_ABP_200508_CommentaryLoadingCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::NewProp__targetIndex = { "_targetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommentaryLoadingManager_eventDebug_StartSelectedScreen_Parms, _targetIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCommentaryLoadingManager_eventDebug_StartSelectedScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCommentaryLoadingManager_eventDebug_StartSelectedScreen_Parms), &Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::NewProp__completeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::NewProp__targetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommentaryLoadingManager, nullptr, "Debug_StartSelectedScreen", nullptr, nullptr, sizeof(ELCommentaryLoadingManager_eventDebug_StartSelectedScreen_Parms), Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommentaryLoadingManager_EndScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommentaryLoadingManager_EndScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommentaryLoadingManager_EndScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommentaryLoadingManager, nullptr, "EndScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommentaryLoadingManager_EndScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommentaryLoadingManager_EndScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommentaryLoadingManager_EndScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommentaryLoadingManager_EndScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommentaryLoadingManager_OnCompleteLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommentaryLoadingManager_OnCompleteLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommentaryLoadingManager_OnCompleteLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommentaryLoadingManager, nullptr, "OnCompleteLoading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommentaryLoadingManager_OnCompleteLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommentaryLoadingManager_OnCompleteLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommentaryLoadingManager_OnCompleteLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommentaryLoadingManager_OnCompleteLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics
	{
		struct ELCommentaryLoadingManager_eventSetReserveFightWrestlerIDs_Parms
		{
			TArray<EWrestlerID_N> _targetWrestlerIDs;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetWrestlerIDs_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetWrestlerIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetWrestlerIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::NewProp__targetWrestlerIDs_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::NewProp__targetWrestlerIDs_Inner = { "_targetWrestlerIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::NewProp__targetWrestlerIDs = { "_targetWrestlerIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommentaryLoadingManager_eventSetReserveFightWrestlerIDs_Parms, _targetWrestlerIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::NewProp__targetWrestlerIDs_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::NewProp__targetWrestlerIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::NewProp__targetWrestlerIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommentaryLoadingManager, nullptr, "SetReserveFightWrestlerIDs", nullptr, nullptr, sizeof(ELCommentaryLoadingManager_eventSetReserveFightWrestlerIDs_Parms), Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics
	{
		struct ELCommentaryLoadingManager_eventStartScreen_Parms
		{
			FScriptDelegate _completeDelegate;
			int32 BaseZOrder;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__completeDelegate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseZOrder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::NewProp__completeDelegate = { "_completeDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommentaryLoadingManager_eventStartScreen_Parms, _completeDelegate), Z_Construct_UDelegateFunction_ABP_200508_CommentaryLoadingCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::NewProp_BaseZOrder = { "BaseZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommentaryLoadingManager_eventStartScreen_Parms, BaseZOrder), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCommentaryLoadingManager_eventStartScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCommentaryLoadingManager_eventStartScreen_Parms), &Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::NewProp__completeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::NewProp_BaseZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommentaryLoadingManager, nullptr, "StartScreen", nullptr, nullptr, sizeof(ELCommentaryLoadingManager_eventStartScreen_Parms), Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCommentaryLoadingManager_NoRegister()
	{
		return UELCommentaryLoadingManager::StaticClass();
	}
	struct Z_Construct_UClass_UELCommentaryLoadingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ExecCountInfoMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ExecCountInfoMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ExecCountInfoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ExecCountInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_ExecCountInfoMap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ReserveWrestlerIdList_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ReserveWrestlerIdList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ReserveWrestlerIdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ReserveWrestlerIdList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pLoadingExecuteActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pLoadingExecuteActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCommentaryLoadingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCommentaryLoadingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCommentaryLoadingManager_Debug_StartSelectedScreen, "Debug_StartSelectedScreen" }, // 3064767628
		{ &Z_Construct_UFunction_UELCommentaryLoadingManager_EndScreen, "EndScreen" }, // 409223278
		{ &Z_Construct_UFunction_UELCommentaryLoadingManager_OnCompleteLoading, "OnCompleteLoading" }, // 4034669357
		{ &Z_Construct_UFunction_UELCommentaryLoadingManager_SetReserveFightWrestlerIDs, "SetReserveFightWrestlerIDs" }, // 212437287
		{ &Z_Construct_UFunction_UELCommentaryLoadingManager_StartScreen, "StartScreen" }, // 1863755719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCommentaryLoadingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCommentaryLoadingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_ValueProp = { "m_ExecCountInfoMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Ref, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_Key_KeyProp = { "m_ExecCountInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCommentaryLoadingManager" },
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap = { "m_ExecCountInfoMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCommentaryLoadingManager, m_ExecCountInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList_Inner = { "m_ReserveWrestlerIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCommentaryLoadingManager" },
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList = { "m_ReserveWrestlerIdList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCommentaryLoadingManager, m_ReserveWrestlerIdList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_pLoadingExecuteActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCommentaryLoadingManager" },
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_pLoadingExecuteActor = { "m_pLoadingExecuteActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCommentaryLoadingManager, m_pLoadingExecuteActor), Z_Construct_UClass_AELCommentaryLoadingExecutorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_pLoadingExecuteActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_pLoadingExecuteActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_CompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCommentaryLoadingManager" },
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_CompleteDelegate = { "CompleteDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCommentaryLoadingManager, CompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_CommentaryLoadingCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_CompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_CompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCommentaryLoadingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ExecCountInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_ReserveWrestlerIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_m_pLoadingExecuteActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommentaryLoadingManager_Statics::NewProp_CompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCommentaryLoadingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCommentaryLoadingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCommentaryLoadingManager_Statics::ClassParams = {
		&UELCommentaryLoadingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCommentaryLoadingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCommentaryLoadingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCommentaryLoadingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCommentaryLoadingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCommentaryLoadingManager, 1405634687);
	template<> ABP_200508_API UClass* StaticClass<UELCommentaryLoadingManager>()
	{
		return UELCommentaryLoadingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCommentaryLoadingManager(Z_Construct_UClass_UELCommentaryLoadingManager, &UELCommentaryLoadingManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCommentaryLoadingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCommentaryLoadingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
