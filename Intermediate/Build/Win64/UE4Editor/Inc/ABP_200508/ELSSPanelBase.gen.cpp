// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPanelBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPanelBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSPanelEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELSSPanelBase::execGetVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVisible_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelBase::execOnClosePanelNative)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClosePanelNative();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelBase::execOnCreate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreate_Implementation(Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelBase::execOnDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroy_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelBase::execOnUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdate_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelBase::execSetupChildren)
	{
		P_GET_OBJECT(UCanvasPanel,Z_Param_rootCanvas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupChildren(Z_Param_rootCanvas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelBase::execSetVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisible_Implementation(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelBase::execSetZOrderInPanel)
	{
		P_GET_OBJECT(UELSSWidgetBase,Z_Param_widgetBase);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZOrderInPanel(Z_Param_widgetBase,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	static FName NAME_UELSSPanelBase_GetVisible = FName(TEXT("GetVisible"));
	bool UELSSPanelBase::GetVisible()
	{
		ELSSPanelBase_eventGetVisible_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelBase_GetVisible),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSPanelBase_OnCreate = FName(TEXT("OnCreate"));
	void UELSSPanelBase::OnCreate(int32 ZOrder)
	{
		ELSSPanelBase_eventOnCreate_Parms Parms;
		Parms.ZOrder=ZOrder;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelBase_OnCreate),&Parms);
	}
	static FName NAME_UELSSPanelBase_OnDestroy = FName(TEXT("OnDestroy"));
	void UELSSPanelBase::OnDestroy()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelBase_OnDestroy),NULL);
	}
	static FName NAME_UELSSPanelBase_OnUpdate = FName(TEXT("OnUpdate"));
	void UELSSPanelBase::OnUpdate(float DeltaTime)
	{
		ELSSPanelBase_eventOnUpdate_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelBase_OnUpdate),&Parms);
	}
	static FName NAME_UELSSPanelBase_SetVisible = FName(TEXT("SetVisible"));
	void UELSSPanelBase::SetVisible(bool inIsVisible)
	{
		ELSSPanelBase_eventSetVisible_Parms Parms;
		Parms.inIsVisible=inIsVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelBase_SetVisible),&Parms);
	}
	void UELSSPanelBase::StaticRegisterNativesUELSSPanelBase()
	{
		UClass* Class = UELSSPanelBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVisible", &UELSSPanelBase::execGetVisible },
			{ "OnClosePanelNative", &UELSSPanelBase::execOnClosePanelNative },
			{ "OnCreate", &UELSSPanelBase::execOnCreate },
			{ "OnDestroy", &UELSSPanelBase::execOnDestroy },
			{ "OnUpdate", &UELSSPanelBase::execOnUpdate },
			{ "SetupChildren", &UELSSPanelBase::execSetupChildren },
			{ "SetVisible", &UELSSPanelBase::execSetVisible },
			{ "SetZOrderInPanel", &UELSSPanelBase::execSetZOrderInPanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelBase_eventGetVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelBase_eventGetVisible_Parms), &Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelBase, nullptr, "GetVisible", nullptr, nullptr, sizeof(ELSSPanelBase_eventGetVisible_Parms), Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelBase_GetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelBase_GetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelBase_OnClosePanelNative_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_OnClosePanelNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelBase_OnClosePanelNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelBase, nullptr, "OnClosePanelNative", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_OnClosePanelNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_OnClosePanelNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelBase_OnClosePanelNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelBase_OnClosePanelNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelBase_eventOnCreate_Parms, ZOrder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::NewProp_ZOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelBase, nullptr, "OnCreate", nullptr, nullptr, sizeof(ELSSPanelBase_eventOnCreate_Parms), Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelBase_OnCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelBase_OnCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelBase_OnDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_OnDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelBase_OnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelBase, nullptr, "OnDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_OnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_OnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelBase_OnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelBase_OnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelBase_eventOnUpdate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelBase, nullptr, "OnUpdate", nullptr, nullptr, sizeof(ELSSPanelBase_eventOnUpdate_Parms), Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelBase_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelBase_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics
	{
		struct ELSSPanelBase_eventSetupChildren_Parms
		{
			UCanvasPanel* rootCanvas;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rootCanvas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::NewProp_rootCanvas_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::NewProp_rootCanvas = { "rootCanvas", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelBase_eventSetupChildren_Parms, rootCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::NewProp_rootCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::NewProp_rootCanvas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::NewProp_rootCanvas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelBase, nullptr, "SetupChildren", nullptr, nullptr, sizeof(ELSSPanelBase_eventSetupChildren_Parms), Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelBase_SetupChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelBase_SetupChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics
	{
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelBase_eventSetVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelBase_eventSetVisible_Parms), &Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelBase, nullptr, "SetVisible", nullptr, nullptr, sizeof(ELSSPanelBase_eventSetVisible_Parms), Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelBase_SetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelBase_SetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics
	{
		struct ELSSPanelBase_eventSetZOrderInPanel_Parms
		{
			UELSSWidgetBase* widgetBase;
			int32 ZOrder;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::NewProp_widgetBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::NewProp_widgetBase = { "widgetBase", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelBase_eventSetZOrderInPanel_Parms, widgetBase), Z_Construct_UClass_UELSSWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::NewProp_widgetBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::NewProp_widgetBase_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelBase_eventSetZOrderInPanel_Parms, ZOrder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::NewProp_widgetBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::NewProp_ZOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelBase, nullptr, "SetZOrderInPanel", nullptr, nullptr, sizeof(ELSSPanelBase_eventSetZOrderInPanel_Parms), Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSPanelBase_NoRegister()
	{
		return UELSSPanelBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPanelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonLayoutWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonLayoutWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClosePanelEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosePanelEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPanelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSPanelBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSPanelBase_GetVisible, "GetVisible" }, // 755400362
		{ &Z_Construct_UFunction_UELSSPanelBase_OnClosePanelNative, "OnClosePanelNative" }, // 935212768
		{ &Z_Construct_UFunction_UELSSPanelBase_OnCreate, "OnCreate" }, // 1379250650
		{ &Z_Construct_UFunction_UELSSPanelBase_OnDestroy, "OnDestroy" }, // 2962512967
		{ &Z_Construct_UFunction_UELSSPanelBase_OnUpdate, "OnUpdate" }, // 802903014
		{ &Z_Construct_UFunction_UELSSPanelBase_SetupChildren, "SetupChildren" }, // 1638259617
		{ &Z_Construct_UFunction_UELSSPanelBase_SetVisible, "SetVisible" }, // 4041282764
		{ &Z_Construct_UFunction_UELSSPanelBase_SetZOrderInPanel, "SetZOrderInPanel" }, // 1051360606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPanelBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance_Inner = { "WidgetInstance", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance = { "WidgetInstance", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelBase, WidgetInstance), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_CommonLayoutWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_CommonLayoutWidget = { "CommonLayoutWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelBase, CommonLayoutWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_CommonLayoutWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_CommonLayoutWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_OnClosePanelEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_OnClosePanelEventDispatcher = { "OnClosePanelEventDispatcher", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelBase, OnClosePanelEventDispatcher), Z_Construct_UDelegateFunction_ABP_200508_SSPanelEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_OnClosePanelEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_OnClosePanelEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSPanelBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_WidgetInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_CommonLayoutWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelBase_Statics::NewProp_OnClosePanelEventDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPanelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSPanelBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPanelBase_Statics::ClassParams = {
		&UELSSPanelBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSPanelBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSPanelBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPanelBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPanelBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPanelBase, 3372319156);
	template<> ABP_200508_API UClass* StaticClass<UELSSPanelBase>()
	{
		return UELSSPanelBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPanelBase(Z_Construct_UClass_UELSSPanelBase, &UELSSPanelBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPanelBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPanelBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
