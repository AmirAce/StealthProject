// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Notifies/AlsAnimNotify_SetGroundedEntryMode.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimNotify_SetGroundedEntryMode() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	void UAlsAnimNotify_SetGroundedEntryMode::StaticRegisterNativesUAlsAnimNotify_SetGroundedEntryMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimNotify_SetGroundedEntryMode);
	UClass* Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_NoRegister()
	{
		return UAlsAnimNotify_SetGroundedEntryMode::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedEntryMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundedEntryMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Als Set Grounded Entry Mode Animation Notify" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/AlsAnimNotify_SetGroundedEntryMode.h" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_SetGroundedEntryMode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::NewProp_GroundedEntryMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_SetGroundedEntryMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::NewProp_GroundedEntryMode = { "GroundedEntryMode", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotify_SetGroundedEntryMode, GroundedEntryMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::NewProp_GroundedEntryMode_MetaData), Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::NewProp_GroundedEntryMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::NewProp_GroundedEntryMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimNotify_SetGroundedEntryMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::ClassParams = {
		&UAlsAnimNotify_SetGroundedEntryMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimNotify_SetGroundedEntryMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimNotify_SetGroundedEntryMode.OuterSingleton, Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimNotify_SetGroundedEntryMode.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsAnimNotify_SetGroundedEntryMode>()
	{
		return UAlsAnimNotify_SetGroundedEntryMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimNotify_SetGroundedEntryMode);
	UAlsAnimNotify_SetGroundedEntryMode::~UAlsAnimNotify_SetGroundedEntryMode() {}
	struct Z_CompiledInDeferFile_FID_StealthProject_Plugins_ALS_Refactored_4_13_Source_ALS_Public_Notifies_AlsAnimNotify_SetGroundedEntryMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthProject_Plugins_ALS_Refactored_4_13_Source_ALS_Public_Notifies_AlsAnimNotify_SetGroundedEntryMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimNotify_SetGroundedEntryMode, UAlsAnimNotify_SetGroundedEntryMode::StaticClass, TEXT("UAlsAnimNotify_SetGroundedEntryMode"), &Z_Registration_Info_UClass_UAlsAnimNotify_SetGroundedEntryMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimNotify_SetGroundedEntryMode), 2757885403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthProject_Plugins_ALS_Refactored_4_13_Source_ALS_Public_Notifies_AlsAnimNotify_SetGroundedEntryMode_h_536483650(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_StealthProject_Plugins_ALS_Refactored_4_13_Source_ALS_Public_Notifies_AlsAnimNotify_SetGroundedEntryMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StealthProject_Plugins_ALS_Refactored_4_13_Source_ALS_Public_Notifies_AlsAnimNotify_SetGroundedEntryMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
