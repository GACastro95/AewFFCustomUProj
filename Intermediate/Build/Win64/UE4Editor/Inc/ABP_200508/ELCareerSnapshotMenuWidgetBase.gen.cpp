// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerSnapshotMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerSnapshotMenuWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshotScenarioItem_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioNo();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerSnapshotMenuWidgetBase::execCallMoveCursor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AddValue);
		P_GET_UBOOL(Z_Param_IsEnabledLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallMoveCursor(Z_Param_AddValue,Z_Param_IsEnabledLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerSnapshotMenuWidgetBase::execCreateSnapshots)
	{
		P_GET_TARRAY_REF(UCareerSnapshot*,Z_Param_Out_OutSnapshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSnapshots(Z_Param_Out_OutSnapshots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerSnapshotMenuWidgetBase::execFilterExistsSnapshot)
	{
		P_GET_TARRAY_REF(UCareerSnapshot*,Z_Param_Out_Snapshots);
		P_GET_TARRAY_REF(UCareerSnapshot*,Z_Param_Out_OutSnapshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterExistsSnapshot(Z_Param_Out_Snapshots,Z_Param_Out_OutSnapshots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerSnapshotMenuWidgetBase::execMakeItems)
	{
		P_GET_OBJECT(UDataTable,Z_Param_TitleDataTable);
		P_GET_TARRAY(UCareerSnapshot*,Z_Param_Snapshots);
		P_GET_TMAP_REF(ECareerScenarioNo,UCareerSnapshotScenarioItem*,Z_Param_Out_OutItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeItems(Z_Param_TitleDataTable,Z_Param_Snapshots,Z_Param_Out_OutItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerSnapshotMenuWidgetBase::execResetDeleteModeOnce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDeleteModeOnce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerSnapshotMenuWidgetBase::execSetDeleteModeOnce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeleteModeOnce();
		P_NATIVE_END;
	}
	static FName NAME_UELCareerSnapshotMenuWidgetBase_EventInput_Down = FName(TEXT("EventInput_Down"));
	void UELCareerSnapshotMenuWidgetBase::EventInput_Down()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerSnapshotMenuWidgetBase_EventInput_Down),NULL);
	}
	static FName NAME_UELCareerSnapshotMenuWidgetBase_EventInput_Left = FName(TEXT("EventInput_Left"));
	void UELCareerSnapshotMenuWidgetBase::EventInput_Left()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerSnapshotMenuWidgetBase_EventInput_Left),NULL);
	}
	static FName NAME_UELCareerSnapshotMenuWidgetBase_EventInput_Right = FName(TEXT("EventInput_Right"));
	void UELCareerSnapshotMenuWidgetBase::EventInput_Right()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerSnapshotMenuWidgetBase_EventInput_Right),NULL);
	}
	static FName NAME_UELCareerSnapshotMenuWidgetBase_EventInput_Up = FName(TEXT("EventInput_Up"));
	void UELCareerSnapshotMenuWidgetBase::EventInput_Up()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerSnapshotMenuWidgetBase_EventInput_Up),NULL);
	}
	static FName NAME_UELCareerSnapshotMenuWidgetBase_OnDelete = FName(TEXT("OnDelete"));
	void UELCareerSnapshotMenuWidgetBase::OnDelete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerSnapshotMenuWidgetBase_OnDelete),NULL);
	}
	static FName NAME_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot = FName(TEXT("OnRemveAllShapshot"));
	void UELCareerSnapshotMenuWidgetBase::OnRemveAllShapshot()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot),NULL);
	}
	static FName NAME_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum = FName(TEXT("SetWaitSaveSnapshotNum"));
	void UELCareerSnapshotMenuWidgetBase::SetWaitSaveSnapshotNum(int32 Num)
	{
		ELCareerSnapshotMenuWidgetBase_eventSetWaitSaveSnapshotNum_Parms Parms;
		Parms.Num=Num;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum),&Parms);
	}
	static FName NAME_UELCareerSnapshotMenuWidgetBase_StartMovie = FName(TEXT("StartMovie"));
	void UELCareerSnapshotMenuWidgetBase::StartMovie()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerSnapshotMenuWidgetBase_StartMovie),NULL);
	}
	void UELCareerSnapshotMenuWidgetBase::StaticRegisterNativesUELCareerSnapshotMenuWidgetBase()
	{
		UClass* Class = UELCareerSnapshotMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallMoveCursor", &UELCareerSnapshotMenuWidgetBase::execCallMoveCursor },
			{ "CreateSnapshots", &UELCareerSnapshotMenuWidgetBase::execCreateSnapshots },
			{ "FilterExistsSnapshot", &UELCareerSnapshotMenuWidgetBase::execFilterExistsSnapshot },
			{ "MakeItems", &UELCareerSnapshotMenuWidgetBase::execMakeItems },
			{ "ResetDeleteModeOnce", &UELCareerSnapshotMenuWidgetBase::execResetDeleteModeOnce },
			{ "SetDeleteModeOnce", &UELCareerSnapshotMenuWidgetBase::execSetDeleteModeOnce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics
	{
		struct ELCareerSnapshotMenuWidgetBase_eventCallMoveCursor_Parms
		{
			int32 AddValue;
			bool IsEnabledLoop;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddValue;
		static void NewProp_IsEnabledLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabledLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::NewProp_AddValue = { "AddValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapshotMenuWidgetBase_eventCallMoveCursor_Parms, AddValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::NewProp_IsEnabledLoop_SetBit(void* Obj)
	{
		((ELCareerSnapshotMenuWidgetBase_eventCallMoveCursor_Parms*)Obj)->IsEnabledLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::NewProp_IsEnabledLoop = { "IsEnabledLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSnapshotMenuWidgetBase_eventCallMoveCursor_Parms), &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::NewProp_IsEnabledLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::NewProp_AddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::NewProp_IsEnabledLoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "CallMoveCursor", nullptr, nullptr, sizeof(ELCareerSnapshotMenuWidgetBase_eventCallMoveCursor_Parms), Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics
	{
		struct ELCareerSnapshotMenuWidgetBase_eventCreateSnapshots_Parms
		{
			TArray<UCareerSnapshot*> OutSnapshots;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutSnapshots_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSnapshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::NewProp_OutSnapshots_Inner = { "OutSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::NewProp_OutSnapshots = { "OutSnapshots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapshotMenuWidgetBase_eventCreateSnapshots_Parms, OutSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::NewProp_OutSnapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::NewProp_OutSnapshots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "CreateSnapshots", nullptr, nullptr, sizeof(ELCareerSnapshotMenuWidgetBase_eventCreateSnapshots_Parms), Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Down_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Down_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Down_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "EventInput_Down", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Down_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Down_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Down()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Down_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Left_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Left_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "EventInput_Left", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Right_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Right_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "EventInput_Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Up_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Up_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Up_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "EventInput_Up", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Up_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Up_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Up()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Up_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics
	{
		struct ELCareerSnapshotMenuWidgetBase_eventFilterExistsSnapshot_Parms
		{
			TArray<UCareerSnapshot*> Snapshots;
			TArray<UCareerSnapshot*> OutSnapshots;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutSnapshots_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSnapshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_Snapshots_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapshotMenuWidgetBase_eventFilterExistsSnapshot_Parms, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_Snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_Snapshots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_OutSnapshots_Inner = { "OutSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_OutSnapshots = { "OutSnapshots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapshotMenuWidgetBase_eventFilterExistsSnapshot_Parms, OutSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_Snapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_Snapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_OutSnapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::NewProp_OutSnapshots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "FilterExistsSnapshot", nullptr, nullptr, sizeof(ELCareerSnapshotMenuWidgetBase_eventFilterExistsSnapshot_Parms), Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics
	{
		struct ELCareerSnapshotMenuWidgetBase_eventMakeItems_Parms
		{
			const UDataTable* TitleDataTable;
			TArray<UCareerSnapshot*> Snapshots;
			TMap<ECareerScenarioNo,UCareerSnapshotScenarioItem*> OutItems;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleDataTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutItems_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutItems_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutItems_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_TitleDataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_TitleDataTable = { "TitleDataTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapshotMenuWidgetBase_eventMakeItems_Parms, TitleDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_TitleDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_TitleDataTable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_Snapshots_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapshotMenuWidgetBase_eventMakeItems_Parms, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_Snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_Snapshots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_OutItems_ValueProp = { "OutItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCareerSnapshotScenarioItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_OutItems_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_OutItems_Key_KeyProp = { "OutItems_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ECareerScenarioNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_OutItems = { "OutItems", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapshotMenuWidgetBase_eventMakeItems_Parms, OutItems), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_TitleDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_Snapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_Snapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_OutItems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_OutItems_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_OutItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::NewProp_OutItems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "MakeItems", nullptr, nullptr, sizeof(ELCareerSnapshotMenuWidgetBase_eventMakeItems_Parms), Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnDelete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "OnDelete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "OnRemveAllShapshot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_ResetDeleteModeOnce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_ResetDeleteModeOnce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_ResetDeleteModeOnce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "ResetDeleteModeOnce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_ResetDeleteModeOnce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_ResetDeleteModeOnce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_ResetDeleteModeOnce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_ResetDeleteModeOnce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetDeleteModeOnce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetDeleteModeOnce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetDeleteModeOnce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "SetDeleteModeOnce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetDeleteModeOnce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetDeleteModeOnce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetDeleteModeOnce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetDeleteModeOnce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSnapshotMenuWidgetBase_eventSetWaitSaveSnapshotNum_Parms, Num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::NewProp_Num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "SetWaitSaveSnapshotNum", nullptr, nullptr, sizeof(ELCareerSnapshotMenuWidgetBase_eventSetWaitSaveSnapshotNum_Parms), Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_StartMovie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_StartMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_StartMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, nullptr, "StartMovie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_StartMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_StartMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_StartMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_StartMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_NoRegister()
	{
		return UELCareerSnapshotMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteMode_MetaData[];
#endif
		static void NewProp_DeleteMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CallMoveCursor, "CallMoveCursor" }, // 2162296529
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_CreateSnapshots, "CreateSnapshots" }, // 2282659221
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Down, "EventInput_Down" }, // 1462986228
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Left, "EventInput_Left" }, // 3663310776
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Right, "EventInput_Right" }, // 2008518906
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_EventInput_Up, "EventInput_Up" }, // 3834628430
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_FilterExistsSnapshot, "FilterExistsSnapshot" }, // 4280626268
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_MakeItems, "MakeItems" }, // 3637390518
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnDelete, "OnDelete" }, // 1156474322
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_OnRemveAllShapshot, "OnRemveAllShapshot" }, // 745349769
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_ResetDeleteModeOnce, "ResetDeleteModeOnce" }, // 269170663
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetDeleteModeOnce, "SetDeleteModeOnce" }, // 1292259136
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_SetWaitSaveSnapshotNum, "SetWaitSaveSnapshotNum" }, // 1592363469
		{ &Z_Construct_UFunction_UELCareerSnapshotMenuWidgetBase_StartMovie, "StartMovie" }, // 587859809
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerSnapshotMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::NewProp_DeleteMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSnapshotMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELCareerSnapshotMenuWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::NewProp_DeleteMode_SetBit(void* Obj)
	{
		((UELCareerSnapshotMenuWidgetBase*)Obj)->DeleteMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::NewProp_DeleteMode = { "DeleteMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerSnapshotMenuWidgetBase), &Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::NewProp_DeleteMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::NewProp_DeleteMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::NewProp_DeleteMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::NewProp_DeleteMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerSnapshotMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::ClassParams = {
		&UELCareerSnapshotMenuWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerSnapshotMenuWidgetBase, 2525506452);
	template<> ABP_200508_API UClass* StaticClass<UELCareerSnapshotMenuWidgetBase>()
	{
		return UELCareerSnapshotMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerSnapshotMenuWidgetBase(Z_Construct_UClass_UELCareerSnapshotMenuWidgetBase, &UELCareerSnapshotMenuWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerSnapshotMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerSnapshotMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
