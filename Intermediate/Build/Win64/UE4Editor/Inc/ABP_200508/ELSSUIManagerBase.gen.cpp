// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSUIManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSUIManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSUIManagerHandle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSUIManagerBase::execCheck)
	{
		P_GET_OBJECT(UELSSUIManagerHandle,Z_Param_lhs);
		P_GET_OBJECT(UELSSUIManagerHandle,Z_Param_rhs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=AELSSUIManagerBase::Check(Z_Param_lhs,Z_Param_rhs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execCreateFromHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UELSSUIManagerHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSPanelBase**)Z_Param__Result=P_THIS->CreateFromHandle(Z_Param_WorldContextObject,Z_Param_Handle,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execCreateFromUI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTCLASS(TSoftClassPtr<UELSSPanelBase> ,Z_Param_basePanel);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSPanelBase**)Z_Param__Result=P_THIS->CreateFromUI(Z_Param_WorldContextObject,Z_Param_basePanel,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execCreateImmediate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSPanelBase**)Z_Param__Result=P_THIS->CreateImmediate(Z_Param_WorldContextObject,Z_Param_WidgetClass,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execDump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		AELSSUIManagerBase::Dump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execDumpHandleInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		AELSSUIManagerBase::DumpHandleInfo(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execFinalize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finalize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execIsLoadComplete)
	{
		P_GET_OBJECT(UELSSUIManagerHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoadComplete(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execLoadAsync)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UELSSPanelBase> ,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSUIManagerHandle**)Z_Param__Result=P_THIS->LoadAsync(Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execSetPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerController(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSUIManagerBase::execUnload)
	{
		P_GET_OBJECT(UELSSUIManagerHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unload(Z_Param_Handle);
		P_NATIVE_END;
	}
	static FName NAME_AELSSUIManagerBase_CloseVictoryroyaleNamePlate = FName(TEXT("CloseVictoryroyaleNamePlate"));
	void AELSSUIManagerBase::CloseVictoryroyaleNamePlate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSUIManagerBase_CloseVictoryroyaleNamePlate),NULL);
	}
	static FName NAME_AELSSUIManagerBase_OpenVictoryroyaleNamePlate = FName(TEXT("OpenVictoryroyaleNamePlate"));
	void AELSSUIManagerBase::OpenVictoryroyaleNamePlate(AELSSPlayer* inPlayer, int32 InChampionNum, const FString& InRingName, const FString& InGamerTag)
	{
		ELSSUIManagerBase_eventOpenVictoryroyaleNamePlate_Parms Parms;
		Parms.inPlayer=inPlayer;
		Parms.InChampionNum=InChampionNum;
		Parms.InRingName=InRingName;
		Parms.InGamerTag=InGamerTag;
		ProcessEvent(FindFunctionChecked(NAME_AELSSUIManagerBase_OpenVictoryroyaleNamePlate),&Parms);
	}
	static FName NAME_AELSSUIManagerBase_SetLoadingScreen = FName(TEXT("SetLoadingScreen"));
	void AELSSUIManagerBase::SetLoadingScreen(bool IsOpen)
	{
		ELSSUIManagerBase_eventSetLoadingScreen_Parms Parms;
		Parms.IsOpen=IsOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSUIManagerBase_SetLoadingScreen),&Parms);
	}
	void AELSSUIManagerBase::StaticRegisterNativesAELSSUIManagerBase()
	{
		UClass* Class = AELSSUIManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Check", &AELSSUIManagerBase::execCheck },
			{ "CreateFromHandle", &AELSSUIManagerBase::execCreateFromHandle },
			{ "CreateFromUI", &AELSSUIManagerBase::execCreateFromUI },
			{ "CreateImmediate", &AELSSUIManagerBase::execCreateImmediate },
			{ "Dump", &AELSSUIManagerBase::execDump },
			{ "DumpHandleInfo", &AELSSUIManagerBase::execDumpHandleInfo },
			{ "Finalize", &AELSSUIManagerBase::execFinalize },
			{ "Initialize", &AELSSUIManagerBase::execInitialize },
			{ "IsLoadComplete", &AELSSUIManagerBase::execIsLoadComplete },
			{ "LoadAsync", &AELSSUIManagerBase::execLoadAsync },
			{ "SetPlayerController", &AELSSUIManagerBase::execSetPlayerController },
			{ "Unload", &AELSSUIManagerBase::execUnload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics
	{
		struct ELSSUIManagerBase_eventCheck_Parms
		{
			UELSSUIManagerHandle* lhs;
			UELSSUIManagerHandle* rhs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lhs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rhs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCheck_Parms, lhs), Z_Construct_UClass_UELSSUIManagerHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCheck_Parms, rhs), Z_Construct_UClass_UELSSUIManagerHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUIManagerBase_eventCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerBase_eventCheck_Parms), &Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::NewProp_lhs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::NewProp_rhs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "Check", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventCheck_Parms), Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_Check()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_Check_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_CloseVictoryroyaleNamePlate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_CloseVictoryroyaleNamePlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_CloseVictoryroyaleNamePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "CloseVictoryroyaleNamePlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_CloseVictoryroyaleNamePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CloseVictoryroyaleNamePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_CloseVictoryroyaleNamePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_CloseVictoryroyaleNamePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics
	{
		struct ELSSUIManagerBase_eventCreateFromHandle_Parms
		{
			UObject* WorldContextObject;
			UELSSUIManagerHandle* Handle;
			int32 ZOrder;
			UELSSPanelBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateFromHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateFromHandle_Parms, Handle), Z_Construct_UClass_UELSSUIManagerHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateFromHandle_Parms, ZOrder), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateFromHandle_Parms, ReturnValue), Z_Construct_UClass_UELSSPanelBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_ZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "CreateFromHandle", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventCreateFromHandle_Parms), Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics
	{
		struct ELSSUIManagerBase_eventCreateFromUI_Parms
		{
			UObject* WorldContextObject;
			TSoftClassPtr<UELSSPanelBase>  basePanel;
			int32 ZOrder;
			UELSSPanelBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_basePanel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateFromUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_basePanel = { "basePanel", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateFromUI_Parms, basePanel), Z_Construct_UClass_UELSSPanelBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateFromUI_Parms, ZOrder), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateFromUI_Parms, ReturnValue), Z_Construct_UClass_UELSSPanelBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_basePanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_ZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "CreateFromUI", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventCreateFromUI_Parms), Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics
	{
		struct ELSSUIManagerBase_eventCreateImmediate_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UELSSPanelBase>  WidgetClass;
			int32 ZOrder;
			UELSSPanelBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateImmediate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateImmediate_Parms, WidgetClass), Z_Construct_UClass_UELSSPanelBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateImmediate_Parms, ZOrder), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventCreateImmediate_Parms, ReturnValue), Z_Construct_UClass_UELSSPanelBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_ZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "CreateImmediate", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventCreateImmediate_Parms), Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_Dump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_Dump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_Dump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "Dump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_Dump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_Dump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_Dump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_Dump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics
	{
		struct ELSSUIManagerBase_eventDumpHandleInfo_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventDumpHandleInfo_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "DumpHandleInfo", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventDumpHandleInfo_Parms), Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_Finalize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_Finalize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_Finalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "Finalize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_Finalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_Finalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_Finalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_Finalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics
	{
		struct ELSSUIManagerBase_eventIsLoadComplete_Parms
		{
			UELSSUIManagerHandle* Handle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventIsLoadComplete_Parms, Handle), Z_Construct_UClass_UELSSUIManagerHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUIManagerBase_eventIsLoadComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerBase_eventIsLoadComplete_Parms), &Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "IsLoadComplete", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventIsLoadComplete_Parms), Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics
	{
		struct ELSSUIManagerBase_eventLoadAsync_Parms
		{
			TSoftClassPtr<UELSSPanelBase>  WidgetClass;
			UELSSUIManagerHandle* ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventLoadAsync_Parms, WidgetClass), Z_Construct_UClass_UELSSPanelBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventLoadAsync_Parms, ReturnValue), Z_Construct_UClass_UELSSUIManagerHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "LoadAsync", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventLoadAsync_Parms), Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InChampionNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InRingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGamerTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGamerTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventOpenVictoryroyaleNamePlate_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InChampionNum = { "InChampionNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventOpenVictoryroyaleNamePlate_Parms, InChampionNum), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InRingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InRingName = { "InRingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventOpenVictoryroyaleNamePlate_Parms, InRingName), METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InRingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InRingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InGamerTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InGamerTag = { "InGamerTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventOpenVictoryroyaleNamePlate_Parms, InGamerTag), METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InGamerTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InGamerTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_inPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InChampionNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InRingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::NewProp_InGamerTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "OpenVictoryroyaleNamePlate", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventOpenVictoryroyaleNamePlate_Parms), Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOpen_MetaData[];
#endif
		static void NewProp_IsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::NewProp_IsOpen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::NewProp_IsOpen_SetBit(void* Obj)
	{
		((ELSSUIManagerBase_eventSetLoadingScreen_Parms*)Obj)->IsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::NewProp_IsOpen = { "IsOpen", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerBase_eventSetLoadingScreen_Parms), &Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::NewProp_IsOpen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::NewProp_IsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::NewProp_IsOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::NewProp_IsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "SetLoadingScreen", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventSetLoadingScreen_Parms), Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics
	{
		struct ELSSUIManagerBase_eventSetPlayerController_Parms
		{
			APlayerController* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventSetPlayerController_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "SetPlayerController", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventSetPlayerController_Parms), Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics
	{
		struct ELSSUIManagerBase_eventUnload_Parms
		{
			UELSSUIManagerHandle* Handle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUIManagerBase_eventUnload_Parms, Handle), Z_Construct_UClass_UELSSUIManagerHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSUIManagerBase, nullptr, "Unload", nullptr, nullptr, sizeof(ELSSUIManagerBase_eventUnload_Parms), Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSUIManagerBase_Unload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSUIManagerBase_Unload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSUIManagerBase_NoRegister()
	{
		return AELSSUIManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSUIManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandleList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandleList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSUIManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSUIManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSUIManagerBase_Check, "Check" }, // 2963407399
		{ &Z_Construct_UFunction_AELSSUIManagerBase_CloseVictoryroyaleNamePlate, "CloseVictoryroyaleNamePlate" }, // 3916625164
		{ &Z_Construct_UFunction_AELSSUIManagerBase_CreateFromHandle, "CreateFromHandle" }, // 3868483999
		{ &Z_Construct_UFunction_AELSSUIManagerBase_CreateFromUI, "CreateFromUI" }, // 4222757429
		{ &Z_Construct_UFunction_AELSSUIManagerBase_CreateImmediate, "CreateImmediate" }, // 3327450670
		{ &Z_Construct_UFunction_AELSSUIManagerBase_Dump, "Dump" }, // 322676896
		{ &Z_Construct_UFunction_AELSSUIManagerBase_DumpHandleInfo, "DumpHandleInfo" }, // 3162807909
		{ &Z_Construct_UFunction_AELSSUIManagerBase_Finalize, "Finalize" }, // 1576376618
		{ &Z_Construct_UFunction_AELSSUIManagerBase_Initialize, "Initialize" }, // 1684091907
		{ &Z_Construct_UFunction_AELSSUIManagerBase_IsLoadComplete, "IsLoadComplete" }, // 746837482
		{ &Z_Construct_UFunction_AELSSUIManagerBase_LoadAsync, "LoadAsync" }, // 3532333463
		{ &Z_Construct_UFunction_AELSSUIManagerBase_OpenVictoryroyaleNamePlate, "OpenVictoryroyaleNamePlate" }, // 3532615493
		{ &Z_Construct_UFunction_AELSSUIManagerBase_SetLoadingScreen, "SetLoadingScreen" }, // 2927587594
		{ &Z_Construct_UFunction_AELSSUIManagerBase_SetPlayerController, "SetPlayerController" }, // 1400167283
		{ &Z_Construct_UFunction_AELSSUIManagerBase_Unload, "Unload" }, // 2748123163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSUIManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_HandleList_Inner = { "HandleList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSUIManagerHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_HandleList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUIManagerBase" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_HandleList = { "HandleList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSUIManagerBase, HandleList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_HandleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_HandleList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUIManagerBase" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSUIManagerBase, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_PlayerController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSUIManagerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_HandleList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_HandleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSUIManagerBase_Statics::NewProp_PlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSUIManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSUIManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSUIManagerBase_Statics::ClassParams = {
		&AELSSUIManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSUIManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSUIManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSUIManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSUIManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSUIManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSUIManagerBase, 3611859051);
	template<> ABP_200508_API UClass* StaticClass<AELSSUIManagerBase>()
	{
		return AELSSUIManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSUIManagerBase(Z_Construct_UClass_AELSSUIManagerBase, &AELSSUIManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSUIManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSUIManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
